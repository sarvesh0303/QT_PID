/********************************************************************************
** Form generated from reading UI file 'tuner.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TUNER_H
#define UI_TUNER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tuner
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QCheckBox *checkBox;
    QSlider *horizontalSlider_2;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QSpinBox *spinBox_2;
    QSlider *horizontalSlider;
    QSpinBox *spinBox_3;
    QSlider *horizontalSlider_3;
    QSpinBox *spinBox;
    QSpinBox *spinBox_4;
    QSpinBox *spinBox_5;
    QSpinBox *spinBox_6;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;

    void setupUi(QWidget *Tuner)
    {
        if (Tuner->objectName().isEmpty())
            Tuner->setObjectName(QString::fromUtf8("Tuner"));
        Tuner->resize(778, 322);
        gridLayoutWidget = new QWidget(Tuner);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 40, 511, 241));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        checkBox = new QCheckBox(gridLayoutWidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        gridLayout->addWidget(checkBox, 0, 0, 1, 1);

        horizontalSlider_2 = new QSlider(gridLayoutWidget);
        horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_2, 1, 2, 1, 1);

        checkBox_2 = new QCheckBox(gridLayoutWidget);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        gridLayout->addWidget(checkBox_2, 1, 0, 1, 1);

        checkBox_3 = new QCheckBox(gridLayoutWidget);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));

        gridLayout->addWidget(checkBox_3, 2, 0, 1, 1);

        spinBox_2 = new QSpinBox(gridLayoutWidget);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));

        gridLayout->addWidget(spinBox_2, 1, 3, 1, 1);

        horizontalSlider = new QSlider(gridLayoutWidget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider, 0, 2, 1, 1);

        spinBox_3 = new QSpinBox(gridLayoutWidget);
        spinBox_3->setObjectName(QString::fromUtf8("spinBox_3"));

        gridLayout->addWidget(spinBox_3, 2, 3, 1, 1);

        horizontalSlider_3 = new QSlider(gridLayoutWidget);
        horizontalSlider_3->setObjectName(QString::fromUtf8("horizontalSlider_3"));
        horizontalSlider_3->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_3, 2, 2, 1, 1);

        spinBox = new QSpinBox(gridLayoutWidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        gridLayout->addWidget(spinBox, 0, 3, 1, 1);

        spinBox_4 = new QSpinBox(gridLayoutWidget);
        spinBox_4->setObjectName(QString::fromUtf8("spinBox_4"));

        gridLayout->addWidget(spinBox_4, 0, 1, 1, 1);

        spinBox_5 = new QSpinBox(gridLayoutWidget);
        spinBox_5->setObjectName(QString::fromUtf8("spinBox_5"));

        gridLayout->addWidget(spinBox_5, 1, 1, 1, 1);

        spinBox_6 = new QSpinBox(gridLayoutWidget);
        spinBox_6->setObjectName(QString::fromUtf8("spinBox_6"));

        gridLayout->addWidget(spinBox_6, 2, 1, 1, 1);

        lineEdit = new QLineEdit(Tuner);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(570, 80, 71, 22));
        lineEdit_2 = new QLineEdit(Tuner);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(570, 150, 71, 22));
        lineEdit_3 = new QLineEdit(Tuner);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(570, 220, 71, 22));
        lineEdit_4 = new QLineEdit(Tuner);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(670, 80, 71, 22));
        lineEdit_5 = new QLineEdit(Tuner);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(670, 150, 71, 22));
        lineEdit_6 = new QLineEdit(Tuner);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(670, 220, 71, 22));
        label = new QLabel(Tuner);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(590, 20, 59, 14));
        label_2 = new QLabel(Tuner);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(690, 20, 59, 14));
        pushButton = new QPushButton(Tuner);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(590, 270, 131, 31));

        retranslateUi(Tuner);
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), spinBox, SLOT(setValue(int)));
        QObject::connect(spinBox, SIGNAL(valueChanged(int)), horizontalSlider, SLOT(setValue(int)));
        QObject::connect(horizontalSlider_2, SIGNAL(valueChanged(int)), spinBox_2, SLOT(setValue(int)));
        QObject::connect(spinBox_2, SIGNAL(valueChanged(int)), horizontalSlider_2, SLOT(setValue(int)));
        QObject::connect(horizontalSlider_3, SIGNAL(valueChanged(int)), spinBox_3, SLOT(setValue(int)));
        QObject::connect(spinBox_3, SIGNAL(valueChanged(int)), horizontalSlider_3, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(Tuner);
    } // setupUi

    void retranslateUi(QWidget *Tuner)
    {
        Tuner->setWindowTitle(QApplication::translate("Tuner", "Form", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("Tuner", "Joint 1", 0, QApplication::UnicodeUTF8));
        checkBox_2->setText(QApplication::translate("Tuner", "Joint 2", 0, QApplication::UnicodeUTF8));
        checkBox_3->setText(QApplication::translate("Tuner", "Joint 3", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Tuner", "Goal", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Tuner", "Time", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Tuner", "Set Changes", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Tuner: public Ui_Tuner {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TUNER_H
