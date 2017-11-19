#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "labwork1.h"
#include "labwork2.h"
#include "labwork3.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::MainWindow *ui;
    LabWork1 *labWork1;
    LabWork2 *labWork2;
    LabWork3 *labWork3;
};

#endif // MAINWINDOW_H
