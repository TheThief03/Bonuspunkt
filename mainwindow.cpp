#include "mainwindow.h"
#include <QMessageBox>
#include <QPushButton>
#include "ui_mainwindow.h"
#include <QFile>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);//benutze Ui
    setWindowTitle("TicTacToe");

    tictactoe = new TicTacToe;
    std::cout<<tictactoe<<std::endl;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_1_clicked()
{
    try{
        if(wurdeGeklicktEins == false){
            if(Zahl==0){
                ui->pushButton_1->setText("X");
                Zahl++;
            }else{
                ui->pushButton_1->setText("O");
                Zahl--;
            }
        }
        else{
            throw std::out_of_range("Der Button wurde bereits verwendet");
        }
        wurdeGeklicktEins = true;
        gewinner();
        unentschieden();
    }catch(std::out_of_range &error){
        std::cerr<<"Error = "<<error.what()<<std::endl;

    }

}

void MainWindow::on_pushButton_2_clicked()
{
    try{
        if(wurdeGeklicktZwei == false){
            if(Zahl==0){
                ui->pushButton_2->setText("X");
                Zahl++;
            }else{
                ui->pushButton_2->setText("O");
                Zahl--;
            }
        }
        else{
            throw std::out_of_range("Der Button wurde bereits verwendet");
        }
        wurdeGeklicktZwei = true;
        gewinner();
        unentschieden();
    }catch(std::out_of_range &error){
        std::cerr<<"Error = "<<error.what()<<std::endl;

    }
}


void MainWindow::on_pushButton_3_clicked()
{
    try{
        if(wurdeGeklicktDrei == false){
            if(Zahl==0){
                ui->pushButton_3->setText("X");
                Zahl++;
            }else{
                ui->pushButton_3->setText("O");
                Zahl--;
            }
        }
        else{
            throw std::out_of_range("Der Button wurde bereits verwendet");
        }
        wurdeGeklicktDrei = true;
        gewinner();
        unentschieden();
    }catch(std::out_of_range &error){
        std::cerr<<"Error = "<<error.what()<<std::endl;

    }
}


void MainWindow::on_pushButton_4_clicked()
{
    try{
        if(wurdeGeklicktVier == false){
            if(Zahl==0){
                ui->pushButton_4->setText("X");
                Zahl++;
            }else{
                ui->pushButton_4->setText("O");
                Zahl--;
            }
        }
        else{
            throw std::out_of_range("Der Button wurde bereits verwendet");
        }
        wurdeGeklicktVier = true;
        gewinner();
        unentschieden();
    }catch(std::out_of_range &error){
        std::cerr<<"Error = "<<error.what()<<std::endl;

    }
}

void MainWindow::on_pushButton_5_clicked()
{
    try{
        if(wurdeGeklicktFuenf == false){
            if(Zahl==0){
                ui->pushButton_5->setText("X");
                Zahl++;
            }else{
                ui->pushButton_5->setText("O");
                Zahl--;
            }
        }
        else{
            throw std::out_of_range("Der Button wurde bereits verwendet");
        }
        wurdeGeklicktFuenf = true;
        gewinner();
        unentschieden();
    }catch(std::out_of_range &error){
        std::cerr<<"Error = "<<error.what()<<std::endl;

    }
}


void MainWindow::on_pushButton_6_clicked()
{
    try{
        if(wurdeGeklicktSechs == false){
            if(Zahl==0){
                ui->pushButton_6->setText("X");
                Zahl++;
            }else{
                ui->pushButton_6->setText("O");
                Zahl--;
            }
        }
        else{
            throw std::out_of_range("Der Button wurde bereits verwendet");
        }
        wurdeGeklicktSechs = true;
        gewinner();
        unentschieden();
    }catch(std::out_of_range &error){
        std::cerr<<"Error = "<<error.what()<<std::endl;

    }
}


void MainWindow::on_pushButton_7_clicked()
{
    try{
        if(wurdeGeklicktSieben == false){
            if(Zahl==0){
                ui->pushButton_7->setText("X");
                Zahl++;
            }else{
                ui->pushButton_7->setText("O");
                Zahl--;
            }
        }
        else{
            throw std::out_of_range("Der Button wurde bereits verwendet");
        }
        wurdeGeklicktSieben = true;
        gewinner();
        unentschieden();
    }catch(std::out_of_range &error){
        std::cerr<<"Error = "<<error.what()<<std::endl;

    }
}



void MainWindow::on_pushButton_8_clicked()
{
    try{
        if(wurdeGeklicktAcht == false){
            if(Zahl==0){
                ui->pushButton_8->setText("X");
                Zahl++;
            }else{
                ui->pushButton_8->setText("O");
                Zahl--;
            }
        }
        else{
            throw std::out_of_range("Der Button wurde bereits verwendet");
        }
        wurdeGeklicktAcht = true;
        gewinner();
        unentschieden();
    }catch(std::out_of_range &error){
        std::cerr<<"Error = "<<error.what()<<std::endl;

    }
}


void MainWindow::on_pushButton_9_clicked()
{
    try{
        if(wurdeGeklicktNeun == false){
            if(Zahl==0){
                ui->pushButton_9->setText("X");
                Zahl++;
            }else{
                ui->pushButton_9->setText("O");
                Zahl--;
            }
        }
        else{
            throw std::out_of_range("Der Button wurde bereits verwendet");
        }
        wurdeGeklicktNeun = true;
        gewinner();
        unentschieden();
    }catch(std::out_of_range &error){
        std::cerr<<"Error = "<<error.what()<<std::endl;

    }
}

void MainWindow::on_pushButton_10_clicked(){
    spielSpeichern();
}

void MainWindow::on_pushButton_11_clicked()
{
    spielLaden();
}

void MainWindow::on_pushButton_12_clicked(){

    wurdeGeklicktEins = false;
    wurdeGeklicktZwei = false;
    wurdeGeklicktDrei = false;
    wurdeGeklicktVier = false;
    wurdeGeklicktFuenf = false;
    wurdeGeklicktSechs = false;
    wurdeGeklicktSieben = false;
    wurdeGeklicktAcht = false;
    wurdeGeklicktNeun = false;

    ui->pushButton_1->setText(" ");
    ui->pushButton_2->setText(" ");
    ui->pushButton_3->setText(" ");
    ui->pushButton_4->setText(" ");
    ui->pushButton_5->setText(" ");
    ui->pushButton_6->setText(" ");
    ui->pushButton_7->setText(" ");
    ui->pushButton_8->setText(" ");
    ui->pushButton_9->setText(" ");

    Zahl = 0;

}


void MainWindow::spielSpeichern(){
    QFile file("spielstand.txt");
    if(file.open(QIODevice::WriteOnly)){
        QTextStream out(&file);

        out << gewinneX << " " << gewinneO << "\n";

        file.close();

    }else{
        std::cerr << "Datei konnte nicht geoeffnet werden" << std::endl;
    }
}

void MainWindow::spielLaden(){
    QFile file("spielstand.txt");
    if(file.open(QIODevice::ReadOnly)){
        QTextStream in(&file);

        in >> gewinneX >> gewinneO;
        ui->lcdNumber_1->display(gewinneX);
        ui->lcdNumber_2->display(gewinneO);

        file.close();

    }else{
        std::cerr << "Datei konnte nicht geladen werden" << std::endl;
    }
}



void MainWindow::gewinner(){
    if(ui->pushButton_1->text() == "X"){
        if(ui->pushButton_2->text() == "X"){
            if(ui->pushButton_3->text() == "X"){
                std::cout<<"X hat gewonnen"<<std::endl;
                gewinneX++;
                ui->lcdNumber_1->display(gewinneX);
            }
        }
    }
    if(ui->pushButton_4->text() == "X"){
        if(ui->pushButton_5->text() == "X"){
            if(ui->pushButton_6->text() == "X"){
                std::cout<<"X hat gewonnen"<<std::endl;
                gewinneX++;
                ui->lcdNumber_1->display(gewinneX);
            }
        }
    }
    if(ui->pushButton_7->text() == "X"){
        if(ui->pushButton_8->text() == "X"){
            if(ui->pushButton_9->text() == "X"){
                std::cout<<"X hat gewonnen"<<std::endl;
                gewinneX++;
                ui->lcdNumber_1->display(gewinneX);
            }
        }
    }
    if(ui->pushButton_1->text() == "X"){
        if(ui->pushButton_4->text() == "X"){
            if(ui->pushButton_7->text() == "X"){
                std::cout<<"X hat gewonnen"<<std::endl;
                gewinneX++;
                ui->lcdNumber_1->display(gewinneX);
            }
        }
    }
    if(ui->pushButton_2->text() == "X"){
        if(ui->pushButton_5->text() == "X"){
            if(ui->pushButton_8->text() == "X"){
                std::cout<<"X hat gewonnen"<<std::endl;
                gewinneX++;
                ui->lcdNumber_1->display(gewinneX);
            }
        }
    }
    if(ui->pushButton_3->text() == "X"){
        if(ui->pushButton_6->text() == "X"){
            if(ui->pushButton_9->text() == "X"){
                std::cout<<"X hat gewonnen"<<std::endl;
                gewinneX++;
                ui->lcdNumber_1->display(gewinneX);
            }
        }
    }
    if(ui->pushButton_1->text() == "X"){
        if(ui->pushButton_5->text() == "X"){
            if(ui->pushButton_9->text() == "X"){
                std::cout<<"X hat gewonnen"<<std::endl;
                gewinneX++;
                ui->lcdNumber_1->display(gewinneX);
            }
        }
    }
    if(ui->pushButton_3->text() == "X"){
        if(ui->pushButton_5->text() == "X"){
            if(ui->pushButton_7->text() == "X"){
                std::cout<<"X hat gewonnen"<<std::endl;
                gewinneX++;
                ui->lcdNumber_1->display(gewinneX);
            }
        }
    }
    if(ui->pushButton_1->text() == "O"){
        if(ui->pushButton_2->text() == "O"){
            if(ui->pushButton_3->text() == "O"){
                std::cout<<"O hat gewonnen"<<std::endl;
                gewinneO++;
                ui->lcdNumber_2->display(gewinneO);
            }
        }
    }
    if(ui->pushButton_4->text() == "O"){
        if(ui->pushButton_5->text() == "O"){
            if(ui->pushButton_6->text() == "O"){
                std::cout<<"O hat gewonnen"<<std::endl;
                gewinneO++;
                ui->lcdNumber_2->display(gewinneO);
            }
        }
    }
    if(ui->pushButton_7->text() == "O"){
        if(ui->pushButton_8->text() == "O"){
            if(ui->pushButton_9->text() == "O"){
                std::cout<<"O hat gewonnen"<<std::endl;
                gewinneO++;
                ui->lcdNumber_2->display(gewinneO);
            }
        }
    }
    if(ui->pushButton_1->text() == "O"){
        if(ui->pushButton_4->text() == "O"){
            if(ui->pushButton_7->text() == "O"){
                std::cout<<"O hat gewonnen"<<std::endl;
                gewinneO++;
                ui->lcdNumber_2->display(gewinneO);
            }
        }
    }
    if(ui->pushButton_2->text() == "O"){
        if(ui->pushButton_5->text() == "O"){
            if(ui->pushButton_8->text() == "O"){
                std::cout<<"O hat gewonnen"<<std::endl;
                gewinneO++;
                ui->lcdNumber_2->display(gewinneO);
            }
        }
    }
    if(ui->pushButton_3->text() == "O"){
        if(ui->pushButton_6->text() == "O"){
            if(ui->pushButton_9->text() == "O"){
                std::cout<<"O hat gewonnen"<<std::endl;
                gewinneO++;
                ui->lcdNumber_2->display(gewinneO);
            }
        }
    }
    if(ui->pushButton_1->text() == "O"){
        if(ui->pushButton_5->text() == "O"){
            if(ui->pushButton_9->text() == "O"){
                std::cout<<"O hat gewonnen"<<std::endl;
                gewinneO++;
                ui->lcdNumber_2->display(gewinneO);
            }
        }
    }
    if(ui->pushButton_3->text() == "O"){
        if(ui->pushButton_5->text() == "O"){
            if(ui->pushButton_7->text() == "O"){
                std::cout<<"O hat gewonnen"<<std::endl;
                gewinneO++;
                ui->lcdNumber_2->display(gewinneO);
            }
        }
    }
}


void MainWindow::unentschieden(){
    if((ui->pushButton_1->text() == "O" || ui->pushButton_1->text() == "X") &&
        (ui->pushButton_2->text() == "O" || ui->pushButton_2->text() == "X") &&
        (ui->pushButton_3->text() == "O" || ui->pushButton_3->text() == "X") &&
        (ui->pushButton_4->text() == "O" || ui->pushButton_4->text() == "X") &&
        (ui->pushButton_5->text() == "O" || ui->pushButton_5->text() == "X") &&
        (ui->pushButton_6->text() == "O" || ui->pushButton_6->text() == "X") &&
        (ui->pushButton_7->text() == "O" || ui->pushButton_7->text() == "X") &&
        (ui->pushButton_8->text() == "O" || ui->pushButton_8->text() == "X") &&
        (ui->pushButton_9->text() == "O" || ui->pushButton_9->text() == "X")) {
        std::cout << "Spiel endet Unentschieden" << std::endl;
    }
}














