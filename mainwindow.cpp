#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "labwork1.h"
#include "labwork1_laws.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    labWork1 = new LabWork1;
    connect(labWork1, &LabWork1::labWork1, this, &MainWindow::show);

    labWork2 = new LabWork2;
    connect(labWork2, &LabWork2::labWork2, this, &MainWindow::show);

    labWork3 = new LabWork3;
    connect(labWork3, &LabWork3::labWork3, this, &MainWindow::show);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    labWork1->show();
    this->close();
}

void MainWindow::on_pushButton_2_clicked()
{
    labWork2->show();
    this->close();
}

void MainWindow::on_pushButton_3_clicked()
{
    labWork3->show();
    this->close();
}


