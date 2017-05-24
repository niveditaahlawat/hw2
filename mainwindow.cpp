#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
   // QObject::connect(ui->dropdown_box, SIGNAL(valueChanged(int)), this, SLOT(update_overall(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

/*
void MainWindow::update_overall(int) {
   double score = 30.0;
    // double score = static_cast<double>(unused);
   // if(ui->dropdown_box->currentText()=="PIC 10C: Advanced Programming")
   //     score = 30.0;
    ui->score_output_label->setText(QString::number(score));
    return;
}
*/

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


void MainWindow::on_mid1slider_valueChanged(int value)
{
    ui->mid1_score->setValue(value);
}
void MainWindow::on_mid2slider_valueChanged(int value)
{
    ui->mid2_score->setValue(value);
}
void MainWindow::on_finalslider_valueChanged(int value)
{
    ui->final_score->setValue(value);
}


void MainWindow::on_hw1_score_valueChanged(double arg1)
{
    ui->hw1_slider->setValue(arg1);
}
void MainWindow::on_hw2_score_valueChanged(double arg1)
{
    ui->hw2_slider->setValue(arg1);
}
void MainWindow::on_hw3_score_valueChanged(double arg1)
{
    ui->hw3_slider->setValue(arg1);
}
void MainWindow::on_hw4_score_valueChanged(double arg1)
{
    ui->hw4_slider->setValue(arg1);
}
void MainWindow::on_hw5_score_valueChanged(double arg1)
{
    ui->hw5_slider->setValue(arg1);
}
void MainWindow::on_hw6_score_valueChanged(double arg1)
{
    ui->hw6_slider->setValue(arg1);
}
void MainWindow::on_hw7_score_valueChanged(double arg1)
{
    ui->hw7_slider->setValue(arg1);
}
void MainWindow::on_hw8_score_valueChanged(double arg1)
{
    ui->hw8_slider->setValue(arg1);
}


void MainWindow::on_mid1_score_valueChanged(double arg1)
{
    ui->mid1slider->setValue(arg1);
}
void MainWindow::on_mid2_score_valueChanged(double arg1)
{
    ui->mid2slider->setValue(arg1);
}
void MainWindow::on_final_score_valueChanged(double arg1)
{
    ui->finalslider->setValue(arg1);
}
