#ifndef LABWORK3_H
#define LABWORK3_H

#include <QMainWindow>

namespace Ui {
class LabWork3;
}

class LabWork3 : public QMainWindow
{
    Q_OBJECT

public:
    explicit LabWork3(QWidget *parent = 0);
    ~LabWork3();

signals:
    void labWork3();

private:
    Ui::LabWork3 *ui;
};

#endif // LABWORK3_H
