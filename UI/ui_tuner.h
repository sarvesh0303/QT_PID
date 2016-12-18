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
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tuner
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QSpinBox *spinBox_4;
    QSpinBox *spinBox_5;
    QSpinBox *spinBox_6;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_6;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QLabel *label_3;

    void setupUi(QWidget *Tuner)
    {
        if (Tuner->objectName().isEmpty())
            Tuner->setObjectName(QString::fromUtf8("Tuner"));
        Tuner->resize(729, 311);
        gridLayoutWidget = new QWidget(Tuner);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 40, 511, 241));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        checkBox = new QCheckBox(gridLayoutWidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        gridLayout->addWidget(checkBox, 0, 0, 1, 1);

        checkBox_2 = new QCheckBox(gridLayoutWidget);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        gridLayout->addWidget(checkBox_2, 1, 0, 1, 1);

        checkBox_3 = new QCheckBox(gridLayoutWidget);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));

        gridLayout->addWidget(checkBox_3, 2, 0, 1, 1);

        spinBox_4 = new QSpinBox(gridLayoutWidget);
        spinBox_4->setObjectName(QString::fromUtf8("spinBox_4"));

        gridLayout->addWidget(spinBox_4, 0, 1, 1, 1);

        spinBox_5 = new QSpinBox(gridLayoutWidget);
        spinBox_5->setObjectName(QString::fromUtf8("spinBox_5"));

        gridLayout->addWidget(spinBox_5, 1, 1, 1, 1);

        spinBox_6 = new QSpinBox(gridLayoutWidget);
        spinBox_6->setObjectName(QString::fromUtf8("spinBox_6"));

        gridLayout->addWidget(spinBox_6, 2, 1, 1, 1);

        lineEdit_2 = new QLineEdit(gridLayoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 1, 2, 1, 1);

        lineEdit_4 = new QLineEdit(gridLayoutWidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        gridLayout->addWidget(lineEdit_4, 0, 3, 1, 1);

        lineEdit = new QLineEdit(gridLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 2, 1, 1);

        lineEdit_5 = new QLineEdit(gridLayoutWidget);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        gridLayout->addWidget(lineEdit_5, 1, 3, 1, 1);

        lineEdit_3 = new QLineEdit(gridLayoutWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        gridLayout->addWidget(lineEdit_3, 2, 2, 1, 1);

        lineEdit_6 = new QLineEdit(gridLayoutWidget);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

        gridLayout->addWidget(lineEdit_6, 2, 3, 1, 1);

        label = new QLabel(Tuner);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(220, 10, 59, 14));
        label_2 = new QLabel(Tuner);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(420, 10, 59, 14));
        pushButton = new QPushButton(Tuner);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(580, 80, 131, 31));
        label_3 = new QLabel(Tuner);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 10, 191, 16));

        retranslateUi(Tuner);

        QMetaObject::connectSlotsByName(Tuner);
    } // setupUi

    void retranslateUi(QWidget *Tuner)
    {
        Tuner->setWindowTitle(QApplication::translate("Tuner", "Form", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("Tuner", "Move 1", 0, QApplication::UnicodeUTF8));
        checkBox_2->setText(QApplication::translate("Tuner", "Move 2", 0, QApplication::UnicodeUTF8));
        checkBox_3->setText(QApplication::translate("Tuner", "Move 3", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Tuner", "Goal", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Tuner", "Time", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Tuner", "Set Changes", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Tuner", "Sequence of Movements", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Tuner: public Ui_Tuner {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TUNER_H
