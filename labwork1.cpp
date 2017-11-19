#include "labwork1.h"
#include "ui_labwork1.h"
#include "labwork1_laws.h"
#include <QTableWidget>
#include <QLabel>
#include <QString>
#include <mainwindow.h>
#include <QDebug>
#include <QSpinBox>
#include <QMessageBox>

LabWork1::LabWork1(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LabWork1)
{
    ui -> setupUi(this);

    LabWork1_Laws rand;
    res1 = rand.rnd_main();
    wer1 =  res1.toList();
    for(int i = 1; i < wer1.size(); i++) {
    }

    res2 = rand.rnd_main_2();
    wer2 = res2.toList();
    for (int i = 0; i < wer2.size(); i++) {
    }

    QTableWidget *tblw = ui -> tableWidget;
    tblw -> setRowCount(12);
    tblw -> setColumnCount(13);
    tblw -> setEditTriggers(QAbstractItemView::NoEditTriggers);
    tblw -> horizontalHeader() -> setSectionResizeMode(QHeaderView::ResizeToContents);
    tblw -> verticalHeader() -> setSectionResizeMode(QHeaderView::ResizeToContents);
//    tblw -> setHorizontalHeader(new QHeaderView(Qt::Horizontal, &));
//    QHeaderView *horizontal = new QHeaderView(Qt::Horizontal, *tblw);
//    horizontal -> setHighlightSections(true);
//    tblw -> setHorizontalHeader(horizontal);
    tblw -> setItem(0, 0, new QTableWidgetItem("вап"));
    tblw -> setItem(2, 0, new QTableWidgetItem("2"));
    tblw -> setItem(3, 0, new QTableWidgetItem("3"));
    tblw -> setItem(4, 0, new QTableWidgetItem("4"));
    tblw -> setItem(5, 0, new QTableWidgetItem("5"));
    tblw -> setItem(6, 0, new QTableWidgetItem("6"));
    tblw -> setItem(7, 0, new QTableWidgetItem("7"));
    tblw -> setItem(8, 0, new QTableWidgetItem("8"));
    tblw -> setItem(9, 0, new QTableWidgetItem("9"));
    tblw -> setItem(10, 0, new QTableWidgetItem("10"));
    tblw -> setItem(11, 0, new QTableWidgetItem("Число отказов"));
    tableHeader<<"№ опыта/число отказавших элементов"<<"dfg";
    //tblw -> setHorizontalHeaderLabels(tableHeader);


//    int i = 1;
//    for (int j = 1; j < tblw -> columnCount(); j++)
////        for (int j = 0; j < tblw->columnCount(); j++) {

//    {
//            QTableWidgetItem *itm = new QTableWidgetItem(QString::number(wer1[j]));
//            tblw -> setItem(i, j, itm);
//    }

//    int k = 2;
//    for (int j = 1; j < tblw -> columnCount(); j++)
////        for (int j = 0; j < tblw->columnCount(); j++) {

//    {
//            QTableWidgetItem *itm = new QTableWidgetItem(QString::number(wer2[j]));
//            tblw -> setItem(k, j, itm);
//    }

//    connect(ui -> spinBox, static_cast<void(QSpinBox::*)(int)>(&QSpinBox::valueChanged), [=](int i){});
    //connect(ui -> , SIGNAL(valueChanged(int)), this, SLOT(on_pushButton_clicked()));

//    connect(ui -> spinBox, SIGNAL(clicked(bool)), this, SLOT(on_pushButton_clicked());

    ui -> spinBox -> setButtonSymbols(QAbstractSpinBox::NoButtons);
}

LabWork1::~LabWork1()
{
    delete ui;
}

void LabWork1::on_pushButton_clicked()
{
    QTableWidget *tblw = ui -> tableWidget;

    int zz = ui->spinBox->value();
    if (zz == 1) {

    int k = 2;
    for (int j = 1; j < tblw -> columnCount(); j++)
//        for (int j = 0; j < tblw->columnCount(); j++) {
    {
            QTableWidgetItem *itm = new QTableWidgetItem(QString::number(wer2[j]));
            tblw -> setItem(k, j, itm);
    }


    int i = 1;
    for (int j = 1; j < tblw -> columnCount(); j++)
//        for (int j = 0; j < tblw->columnCount(); j++) {
    {
            QTableWidgetItem *itm = new QTableWidgetItem(QString::number(wer1[j]));
            tblw -> setItem(i, j, itm);
    }

    }

    else {
        QMessageBox::information(this, "Title", ui -> spinBox -> text());
    }
}




