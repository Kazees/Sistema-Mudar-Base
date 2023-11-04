#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QValidator>
#include <QMessageBox>
#include <QString>
#include <mudarb.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:


    void on_pushButtonSelecionar_clicked();

    void on_pushButtonLimpar_clicked();

private:
    Ui::MainWindow *ui;
    bry::MudarB *n1;
};
#endif // MAINWINDOW_H
