#ifndef LABWORK2_H
#define LABWORK2_H

#include <QMainWindow>

namespace Ui {
class LabWork2;
}

class LabWork2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit LabWork2(QWidget *parent = 0);
    ~LabWork2();

signals:
    void labWork2();

private:
    Ui::LabWork2 *ui;
};

#endif // LABWORK2_H
