#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSlider>
#include <QSpinBox>
#include <QtXml>
#include <sstream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("PID Tuning");
    ui->horizontalSlider->setRange(0,200);
    ui->horizontalSlider_2->setRange(0,200);
    ui->horizontalSlider_3->setRange(0,200);
}

MainWindow::~MainWindow()
{
    delete ui;
}

QString MainWindow::fromdouble(double a) {
    std::stringstream ss;
    ss << a;
    QString k = ss.str().c_str();
    return k;
}

void MainWindow::on_pushButton_2_clicked()
{
    QFile ifile("pid.xml");
    QDomDocument doc;
    doc.setContent(&ifile);
    ifile.close();
    QDomElement root = doc.documentElement();
    QDomElement pnode = root.firstChildElement("p");
    QDomElement inode = root.firstChildElement("i");
    QDomElement dnode = root.firstChildElement("d");
    QDomElement newp = doc.createElement("p");
    QDomElement newi = doc.createElement("i");
    QDomElement newd = doc.createElement("d");
    double p_val = ui->horizontalSlider->value()*1.0;
    double i_val = ui->horizontalSlider_2->value()*0.01;
    double d_val = ui->horizontalSlider_3->value()*0.001;
    QString ps = fromdouble(p_val);
    QString is = fromdouble(i_val);
    QString ds = fromdouble(d_val);
    newp.appendChild(doc.createTextNode(ps));
    newi.appendChild(doc.createTextNode(is));
    newd.appendChild(doc.createTextNode(ds));
    root.replaceChild(newp,pnode);
    root.replaceChild(newi,inode);
    root.replaceChild(newd,dnode);
    QFile ofile("pid.xml");
    ofile.open(QIODevice::WriteOnly);
    QTextStream outs;
    outs.setDevice(&ofile);
    doc.save(outs,4);
    ofile.close();
}

void MainWindow::on_doubleSpinBox_valueChanged(double arg1)
{
    ui->horizontalSlider_3->setValue((int)(arg1*1000));
}


void MainWindow::on_doubleSpinBox_2_valueChanged(double arg1)
{
   ui->horizontalSlider_2->setValue((int)(arg1*100));
}

void MainWindow::on_doubleSpinBox_3_valueChanged(double arg1)
{
    ui->horizontalSlider->setValue((int)(arg1));
}

void MainWindow::on_horizontalSlider_3_valueChanged(int value)
{
    ui->doubleSpinBox->setValue(value*0.001);
}

void MainWindow::on_horizontalSlider_2_valueChanged(int value)
{
    ui->doubleSpinBox_2->setValue(value*0.01);
}


void MainWindow::on_horizontalSlider_valueChanged(int value)
{
    ui->doubleSpinBox_3->setValue(value);
}


