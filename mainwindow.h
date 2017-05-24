#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
signals:
public slots:

private slots:
    void on_hw1_slider_valueChanged(int value);
    void on_hw2_slider_valueChanged(int value);
    void on_hw3_slider_valueChanged(int value);
    void on_hw4_slider_valueChanged(int value);
    void on_hw5_slider_valueChanged(int value);
    void on_hw6_slider_valueChanged(int value);
    void on_hw7_slider_valueChanged(int value);
    void on_hw8_slider_valueChanged(int value);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
