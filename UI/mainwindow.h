#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    int joint;
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QString fromdouble(double a);

public slots:
    void on_pushButton_2_clicked();

    void on_doubleSpinBox_valueChanged(double arg1);

    void on_horizontalSlider_3_valueChanged(int value);

    void on_horizontalSlider_2_valueChanged(int value);

    void on_doubleSpinBox_2_valueChanged(double arg1);

    void on_horizontalSlider_valueChanged(int value);

    void on_doubleSpinBox_3_valueChanged(double arg1);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
