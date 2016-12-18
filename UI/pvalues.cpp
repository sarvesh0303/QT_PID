#include "pvalues.h"
#include "ui_pvalues.h"
#include <QtXml>
#include <QWidget>
#include <QSlider>
#include "mainwindow.h"
#include "tuner.h"

PValues::PValues(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PValues)
{
    ui->setupUi(this);
    QFile ifile("pid.xml");
    QDomDocument doc;
    doc.setContent(&ifile);
    ifile.close();
    QDomElement root = doc.documentElement();
    QDomElement pval = root.firstChildElement("pval");
    ui->horizontalSlider->setValue(pval.firstChildElement("j0").text().toInt());
    std::cout << pval.firstChildElement("j0").text().toInt() << std::endl;
    ui->horizontalSlider_2->setValue(pval.firstChildElement("j1").text().toInt());
    ui->horizontalSlider_3->setValue(pval.firstChildElement("j2").text().toInt());
    ui->horizontalSlider_4->setValue(pval.firstChildElement("j3").text().toInt());
    ui->horizontalSlider_5->setValue(pval.firstChildElement("j4").text().toInt());
    ui->horizontalSlider_6->setValue(pval.firstChildElement("j5").text().toInt());
    ui->horizontalSlider_7->setValue(pval.firstChildElement("j6").text().toInt());
    ui->horizontalSlider_8->setValue(pval.firstChildElement("j7").text().toInt());
    ui->horizontalSlider_9->setValue(pval.firstChildElement("j8").text().toInt());
    ui->horizontalSlider_10->setValue(pval.firstChildElement("j9").text().toInt());
    ui->horizontalSlider_11->setValue(pval.firstChildElement("j10").text().toInt());
    ui->horizontalSlider_12->setValue(pval.firstChildElement("j11").text().toInt());
    ui->horizontalSlider_13->setValue(pval.firstChildElement("j12").text().toInt());
    ui->horizontalSlider_14->setValue(pval.firstChildElement("j13").text().toInt());
    ui->horizontalSlider_15->setValue(pval.firstChildElement("j14").text().toInt());
    ui->horizontalSlider_16->setValue(pval.firstChildElement("j15").text().toInt());
    ui->horizontalSlider_17->setValue(pval.firstChildElement("j16").text().toInt());
    ui->horizontalSlider_18->setValue(pval.firstChildElement("j17").text().toInt());
    QFile ofile("pid.xml");
    ofile.open(QIODevice::WriteOnly);
    QTextStream outs;
    outs.setDevice(&ofile);
    doc.save(outs,4);
    ofile.close();
}

PValues::~PValues()
{
    delete ui;
}

void PValues::on_pushButton_clicked()
{
    QFile ifile("pid.xml");
    QDomDocument *doc = new QDomDocument();
    doc->setContent(&ifile);
    ifile.close();
    QDomElement root = doc->documentElement();
    QDomElement pval = root.firstChildElement("pval");
    node_replace(pval.firstChildElement("j0"),fromint(ui->horizontalSlider->value()),doc);
    std::cout<<ui->horizontalSlider->value()<<std::endl;
    node_replace(pval.firstChildElement("j1"),fromint(ui->horizontalSlider_2->value()),doc);
    node_replace(pval.firstChildElement("j2"),fromint(ui->horizontalSlider_3->value()),doc);
    node_replace(pval.firstChildElement("j3"),fromint(ui->horizontalSlider_4->value()),doc);
    node_replace(pval.firstChildElement("j4"),fromint(ui->horizontalSlider_5->value()),doc);
    node_replace(pval.firstChildElement("j5"),fromint(ui->horizontalSlider_6->value()),doc);
    node_replace(pval.firstChildElement("j6"),fromint(ui->horizontalSlider_7->value()),doc);
    node_replace(pval.firstChildElement("j7"),fromint(ui->horizontalSlider_8->value()),doc);
    node_replace(pval.firstChildElement("j8"),fromint(ui->horizontalSlider_9->value()),doc);
    node_replace(pval.firstChildElement("j9"),fromint(ui->horizontalSlider_10->value()),doc);
    node_replace(pval.firstChildElement("j10"),fromint(ui->horizontalSlider_11->value()),doc);
    node_replace(pval.firstChildElement("j11"),fromint(ui->horizontalSlider_12->value()),doc);
    node_replace(pval.firstChildElement("j12"),fromint(ui->horizontalSlider_13->value()),doc);
    node_replace(pval.firstChildElement("j13"),fromint(ui->horizontalSlider_14->value()),doc);
    node_replace(pval.firstChildElement("j14"),fromint(ui->horizontalSlider_15->value()),doc);
    node_replace(pval.firstChildElement("j15"),fromint(ui->horizontalSlider_16->value()),doc);
    node_replace(pval.firstChildElement("j16"),fromint(ui->horizontalSlider_17->value()),doc);
    node_replace(pval.firstChildElement("j17"),fromint(ui->horizontalSlider_18->value()),doc);
    QFile ofile("pid.xml");
    ofile.open(QIODevice::WriteOnly);
    QTextStream outs;
    outs.setDevice(&ofile);
    doc->save(outs,4);
    ofile.close();
}

void PValues::on_pushButton_2_clicked()
{
    hide();
    tn = new Tuner();
    tn->show();
    tn->activateWindow();
}
