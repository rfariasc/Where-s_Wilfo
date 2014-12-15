#include "waldogui.h"
#include "ui_waldogui.h"
#include <string>
#include <QLabel>
#include "asmOpenCV.h"
#include "franjas.h"
#include "templatematching.h"
#include "temp_histogram.hpp"


WaldoGUI::WaldoGUI(FiltrosGUI* winFiltros, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WaldoGUI)
{
    ui->setupUi(this);
    QObject::connect(this, SIGNAL(imagen_lista()), this, SLOT(cargarImagenOriginal()));
    //TODO
    //QObject::connect(SENDER, SIGNAL(this->imagenFinalLista(Mat&)), this, SLOT(this->cargarImagenProcesada(Mat&)))
    filWind = winFiltros;
    QObject::connect(this, SIGNAL( franjasListas(Mat&)),filWind, SLOT(mostrarFiltroUno(Mat&)) );
    QObject::connect(this, SIGNAL(templateMatchListo(Mat&)), filWind, SLOT(mostrarFiltroDos(Mat&)));

    QObject::connect(this, SIGNAL(RunHistogram(Mat&)), this, SLOT(CargarHistograma(Mat&)));

    QObject::connect(this, SIGNAL(RunHistogram(Mat&)), filWind, SLOT(mostrarFiltroTres(Mat&)));




    QObject::connect(this, SIGNAL(PPB(Mat&)), this, SLOT(PPB_RUN(Mat&)));



}


WaldoGUI::~WaldoGUI()
{
    delete ui;
}

void WaldoGUI::on_pushButton_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Abrir Imagen"), "./",
                                                    tr("Imagen (*.png);; All files (*.*)"));
    if(fileName == "") return;
    emit texto_listo(fileName);

    Mat waldoImage = imread(fileName.toStdString());

    viewImage = MatToQImage(waldoImage);

    if(viewImage.isNull()) {
        QMessageBox::information(this, tr("Error de carga!!"), tr("No se puede cargar %1. ").arg(fileName));

        return;
    }
    emit imagen_lista();

    //AGV Perdonanos porque no sabemos la que hacemos
    //Aca se encuentra el main del codigo

    Franjas franj;
    Mat franjResult;
    Mat templResult;

    franjResult = franj.run(waldoImage);
    emit franjasListas(franjResult);

    Mat histogram  =  franjResult.clone();
    emit RunHistogram(histogram);


    TemplateMatching templ;
    templResult = templ.run(franjResult, result_match);
    emit templateMatchListo(templResult);


    //HistogramModule<1>(&franjResult);

    emit PPB(waldoImage);

}

void WaldoGUI::CargarHistograma(Mat& img)
{
    Rect result[7];
    HistogramModule(img, result);

    for(int i=0; i<7 ; i++){
        histogram_result[i] = result[i];
    }
}

void WaldoGUI::on_pushButton_2_clicked()
{
    CvCapture* cap = cvCaptureFromCAM(0);
    waldoImage = cvQueryFrame(cap);QObject::connect(this, SIGNAL(RunHistogram(Mat&)), filWind, SLOT(mostrarFiltroTres(Mat&)));

    viewImage = MatToQImage(waldoImage);
    if(viewImage.isNull()) {
        QMessageBox::information(this, tr("Error de carga!!"), tr("No se puede cargar webcam"));
        return;
    }
    cvReleaseCapture(&cap);
    emit imagen_lista();
}

void WaldoGUI::on_actionVerFiltros_triggered()
{
    filWind->show();
}

void WaldoGUI::cargarImagenOriginal()
{
    QLabel* vistaImagenLista = new QLabel();
    vistaImagenLista->setPixmap(QPixmap::fromImage(viewImage, Qt::AutoColor));
    ui->scrollArea->setWidget(vistaImagenLista);
}

void WaldoGUI::cargarImagenProcesada(Mat& img)
{
    QImage imagenListaTransf = this->MatToQImage(img);
    QLabel* vistaImagenProcesada = new QLabel();
    vistaImagenProcesada->setPixmap(QPixmap::fromImage(imagenListaTransf, Qt::AutoColor));
}

QImage WaldoGUI::MatToQImage(const Mat& mat)
{
    // 8-bits unsigned, NO. OF CHANNELS=1
    if(mat.type()==CV_8UC1)
    {
        // Set the color table (used to translate colour indexes to qRgb values)
        QVector<QRgb> colorTable;
        for (int i=0; i<256; i++)
            colorTable.push_back(qRgb(i,i,i));
        // Copy input Mat
        const uchar *qImageBuffer = (const uchar*)mat.data;
        // Create QImage with same dimensions as input Mat
        QImage img(qImageBuffer, mat.cols, mat.rows, mat.step, QImage::Format_Indexed8);
        img.setColorTable(colorTable);
        return img;
    }
    // 8-bits unsigned, NO. OF CHANNELS=3
    if(mat.type()==CV_8UC3)
    {
        // Copy input Mat
        const uchar *qImageBuffer = (const uchar*)mat.data;
        // Create QImage with same dimensions as input Mat
        QImage img(qImageBuffer, mat.cols, mat.rows, mat.step, QImage::Format_RGB888);
        return img.rgbSwapped();
    }
    else
    {
        qDebug() << "ERROR: Mat could not be converted to QImage.";
        return QImage();
    }
}


void WaldoGUI::PPB_RUN(Mat & ppb_image){

    int flag=0;

    cout  << "this is sparta" << endl;

    for(int i=0;i<7;i++){
        //rectangle(ppb_image, histogram_result[i], 255);
        for(int j=0;j<5;j++){
            //rectangle(ppb_image, result_match[j], 0);
            Point diff = (histogram_result[i].tl() - result_match[j].tl());
            float dist = diff.x * diff.x + diff.y * diff.y;

            if(dist < 1600){
                rectangle(ppb_image, result_match[j], 0,2);

                flag=1;
                ui->label->setText("Wally encontrado!!!");

            }

        }
    }

    if(flag==0){
        ui->label->setText("Wally no encontrado, Revisar ventana de filtros");
    }

    //imshow("PPB", ppb_image);

    QLabel* vistaImagenLista = new QLabel();
    vistaImagenLista->setPixmap(QPixmap::fromImage(MatToQImage(ppb_image), Qt::AutoColor));
    ui->scrollArea_2->setWidget(vistaImagenLista);
}
