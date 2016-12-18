#ifndef PVALUES_H
#define PVALUES_H
#include "tuner.h"
#include <QWidget>


namespace Ui {
class PValues;
}

class PValues : public QWidget
{
    Q_OBJECT

public:
    explicit PValues(QWidget *parent = 0);
    ~PValues();
public slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();


private:
    Ui::PValues *ui;
    Tuner* tn;
};

#endif // PVALUES_H
