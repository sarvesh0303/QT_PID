#ifndef TUNER_H
#define TUNER_H

#include <QWidget>
#include <QtXml>

namespace Ui {
class Tuner;
}

void node_replace(QDomElement old, QString a,QDomDocument* doc);

class Tuner : public QWidget
{
    Q_OBJECT

public:
    explicit Tuner(QWidget *parent = 0);
    ~Tuner();
public slots:
    void on_pushButton_clicked();

    void on_checkBox_toggled(bool checked);

private:
    Ui::Tuner *ui;
};

#endif // TUNER_H
