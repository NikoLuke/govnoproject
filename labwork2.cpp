#include "labwork2.h"
#include "ui_labwork2.h"

LabWork2::LabWork2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LabWork2)
{
    ui->setupUi(this);
}

LabWork2::~LabWork2()
{
    delete ui;
}
