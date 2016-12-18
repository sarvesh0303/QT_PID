#include "tuner.h"
#include "ui_tuner.h"
#include "mainwindow.h"
#include <QtXml>

/* Template
 *  QFile ifile("pid.xml");
    QDomDocument doc;
    doc.setContent(&ifile);
    ifile.close();
    QDomElement root = doc.documentElement();
    QDomElement pnode = root.firstChildElement("p");
    QDomElement newp = doc.createElement("p");
    double p_val = ui->horizontalSlider->value()*1.0;
    QString ps = fromdouble(p_val);
    newp.appendChild(doc.createTextNode(ps));
    root.replaceChild(newp,pnode);
    QFile ofile("pid.xml");
    ofile.open(QIODevice::WriteOnly);
    QTextStream outs;
    outs.setDevice(&ofile);
    doc.save(outs,4);
    ofile.close();
    */


void node_replace(QDomElement old, QString a,QDomDocument* doc) {
    QDomElement upper = old.parentNode().toElement();
    QDomElement newel = doc->createElement(old.tagName());
    newel.appendChild(doc->createTextNode(a));
    upper.replaceChild(newel,old);
}


Tuner::Tuner(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Tuner)
{
    ui->setupUi(this);
    ui->spinBox_4->setRange(0,18);
    ui->spinBox_5->setRange(0,18);
    ui->spinBox_6->setRange(0,18);
    ui->checkBox->setChecked(false);
    ui->checkBox_2->setChecked(false);
    ui->checkBox_3->setChecked(false);
    ui->checkBox_2->setCheckable(false);
    ui->checkBox_3->setCheckable(false);
    QFile ifile("pid.xml");
    QDomDocument* doc = new QDomDocument();
    doc->setContent(&ifile);
    ifile.close();
    QDomElement root = doc->documentElement();
    node_replace(root.firstChildElement("j1").firstChildElement("id"),fromint(0),doc);
    node_replace(root.firstChildElement("j2").firstChildElement("id"),fromint(0),doc);
    node_replace(root.firstChildElement("j3").firstChildElement("id"),fromint(0),doc);
    QFile ofile("pid.xml");
    ofile.open(QIODevice::WriteOnly);
    QTextStream outs;
    outs.setDevice(&ofile);
    doc->save(outs,4);
    ofile.close();
}

Tuner::~Tuner()
{
    delete ui;
}

void Tuner::on_pushButton_clicked()
{
    QFile ifile("pid.xml");
    QDomDocument* doc = new QDomDocument();
    doc->setContent(&ifile);
    ifile.close();
    QDomElement root = doc->documentElement();
    QDomElement j1 = root.firstChildElement("j1");
    QDomElement j2 = root.firstChildElement("j2");
    QDomElement j3 = root.firstChildElement("j3");
    if (ui->checkBox->isChecked()) {
        node_replace(j1.firstChildElement("id"),fromint(1),doc);
        node_replace(j1.firstChildElement("joint"),fromint(ui->spinBox_4->value()),doc);
        node_replace(j1.firstChildElement("goal"),ui->lineEdit->text(),doc);
        node_replace(j1.firstChildElement("time"),ui->lineEdit_4->text(),doc);
    }
    else {
        node_replace(j1.firstChildElement("id"),fromint(0),doc);
    }
    if (ui->checkBox_2->isChecked()) {
        node_replace(j2.firstChildElement("id"),fromint(1),doc);
        node_replace(j2.firstChildElement("joint"),fromint(ui->spinBox_5->value()),doc);
        node_replace(j2.firstChildElement("goal"),ui->lineEdit_2->text(),doc);
        node_replace(j2.firstChildElement("time"),ui->lineEdit_5->text(),doc);
    }
    else {
        node_replace(j2.firstChildElement("id"),fromint(0),doc);
    }
    if (ui->checkBox_3->isChecked()) {
        node_replace(j3.firstChildElement("id"),fromint(1),doc);
        node_replace(j3.firstChildElement("joint"),fromint(ui->spinBox_6->value()),doc);
        node_replace(j3.firstChildElement("goal"),ui->lineEdit_3->text(),doc);
        node_replace(j3.firstChildElement("time"),ui->lineEdit_6->text(),doc);
    }
    else {
        node_replace(j3.firstChildElement("id"),fromint(0),doc);
    }
    QFile ofile("pid.xml");
    ofile.open(QIODevice::WriteOnly);
    QTextStream outs;
    outs.setDevice(&ofile);
    doc->save(outs,4);
    ofile.close();
}

void Tuner::on_checkBox_toggled(bool checked)
{
    if (checked) {
        ui->checkBox_2->setCheckable(true);
        ui->checkBox_3->setCheckable(true);
    }
    else {
        ui->checkBox_2->setCheckable(false);
        ui->checkBox_3->setCheckable(false);
        ui->checkBox_2->setChecked(false);
        ui->checkBox_3->setChecked(false);
    }

}
