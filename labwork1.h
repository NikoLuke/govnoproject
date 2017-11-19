#ifndef LABWORK1_H
#define LABWORK1_H

#include <QMainWindow>
#include <QPushButton>

namespace Ui {
class LabWork1;
}

class LabWork1 : public QMainWindow
{
    Q_OBJECT

public:
    explicit LabWork1(QWidget *parent = 0);
    ~LabWork1();
    QList<double> wer1;
    QList<double> wer2;
    QVector<double> res1;
    QVector<double> res2;

signals:
    void labWork1();

private slots:
    void on_pushButton_clicked();

private:
    Ui::LabWork1 *ui;
    QStringList tableHeader;
};

#endif // LABWORK1_H
