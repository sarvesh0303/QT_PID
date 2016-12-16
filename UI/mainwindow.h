#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <iostream>
#include <QMainWindow>
#include "tuner.h"

namespace Ui {
class MainWindow;
}

QString fromdouble(double a);
QString fromint(int a);

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    int joint;
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void on_pushButton_2_clicked();

    void on_doubleSpinBox_valueChanged(double arg1);

    void on_horizontalSlider_3_valueChanged(int value);

    void on_horizontalSlider_2_valueChanged(int value);

    void on_doubleSpinBox_2_valueChanged(double arg1);

    void on_horizontalSlider_valueChanged(int value);

    void on_doubleSpinBox_3_valueChanged(double arg1);

    void on_horizontalSlider_sliderMoved(int position);

    void on_ResetButton_toggled(bool checked);

    void on_advanced_clicked();

private:
    Ui::MainWindow *ui;
    Tuner *tn;
};

#endif // MAINWINDOW_H
