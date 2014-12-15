#ifndef WALDOGUI_H
#define WALDOGUI_H

#include <QMainWindow>
#include <iostream>
#include <opencv/cv.h>
#include <opencv/highgui.h>
#include <QMainWindow>
#include <QFileDialog>
#include <QMessageBox>
#include <QImage>
#include <QDebug>
#include "filtrosgui.h"


namespace Ui {
class WaldoGUI;
}

using namespace cv;
using namespace std;

class WaldoGUI : public QMainWindow
{
    Q_OBJECT

public:
    explicit WaldoGUI(FiltrosGUI*winFiltros , QWidget *parent = 0 );
    ~WaldoGUI();
    cv::Mat getWaldoImage();


private:
    Ui::WaldoGUI *ui;
    Mat waldoImage;
    QImage viewImage;
    FiltrosGUI* filWind;
    QImage MatToQImage(const Mat& mat);
    Rect histogram_result[7];
    Rect result_match[5];




public slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_actionVerFiltros_triggered();
    void cargarImagenOriginal();
    void cargarImagenProcesada(Mat &img);
    void CargarHistograma(Mat& img);
    void PPB_RUN(Mat &);

signals:
    void texto_listo(QString);
    void imagen_lista();
    void imagen_lista_2();
    void charge_Filters();
    void imagenFinalLista(Mat&);
    void franjasListas(Mat&);
    void templateMatchListo(Mat&);
    void RunHistogram(Mat&);
    void PPB(Mat&);



};

#endif // WALDOGUI_H
