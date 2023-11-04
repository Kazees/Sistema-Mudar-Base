#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->lineEditNumero->setFocus();
    ui->lineEditNumero->setValidator(new QIntValidator(1,9999));
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButtonSelecionar_clicked()
{
    QString saida;

    try
    {
        if(ui->lineEditNumero->text().toInt()==0 || ui->lineEditNumero->text()=="")
        {
            throw QString("Inválido.");
        }

        bry::MudarB n1(ui->comboBox->currentText().toInt(),ui->lineEditNumero->text().toInt());

        saida=n1.converter();

        ui->textEditResposta->setText(saida);

    }
    catch (QString &erro)
    {
        QMessageBox::information(this,"Erro",erro);
        ui->lineEditNumero->clear();
        ui->lineEditNumero->setFocus();
        ui->textEditResposta->clear();
    }
}

void MainWindow::on_pushButtonLimpar_clicked()
{
    try
    {
        if(ui->lineEditNumero->text()=="")
        {
            throw QString("Inválido.");
        }

        ui->textEditResposta->clear();
        ui->lineEditNumero->clear();
    }
    catch (QString &erro)
    {
        QMessageBox::information(this,"Erro",erro);
        ui->lineEditNumero->clear();
        ui->lineEditNumero->setFocus();
        ui->textEditResposta->clear();
    }
}

