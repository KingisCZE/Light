#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "light.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

Light Bulb = Light();

void MainWindow::on_pushButton_clicked()
{
    Bulb.TurnOn();
}

void MainWindow::on_pushButton_2_clicked()
{
    Bulb.TurnOff();
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->lineEdit->setText(Bulb.getStatus());
}
