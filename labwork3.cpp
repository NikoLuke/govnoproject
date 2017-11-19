#include "labwork3.h"
#include "ui_labwork3.h"

LabWork3::LabWork3(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LabWork3)
{
    ui->setupUi(this);
}

LabWork3::~LabWork3()
{
    delete ui;
}
