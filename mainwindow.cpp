#include "mainwindow.h"
#include "ui_mainwindow.h"

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


void MainWindow::on_hw1_slider_valueChanged(int value)
{
    ui->hw1_score->setValue(value);
}

void MainWindow::on_hw2_slider_valueChanged(int value)
{
    ui->hw2_score->setValue(value);
}

void MainWindow::on_hw3_slider_valueChanged(int value)
{
    ui->hw3_score->setValue(value);
}

void MainWindow::on_hw4_slider_valueChanged(int value)
{
    ui->hw4_score->setValue(value);
}

void MainWindow::on_hw5_slider_valueChanged(int value)
{
    ui->hw5_score->setValue(value);
}

void MainWindow::on_hw6_slider_valueChanged(int value)
{
    ui->hw6_score->setValue(value);
}

void MainWindow::on_hw7_slider_valueChanged(int value)
{
    ui->hw7_score->setValue(value);
}

void MainWindow::on_hw8_slider_valueChanged(int value)
{
    ui->hw8_score->setValue(value);
}
