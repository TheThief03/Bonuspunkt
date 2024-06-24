#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "tictactoe.h"


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
    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_12_clicked();

    void gewinner();

    void spielSpeichern();

    void spielLaden();

    void unentschieden();


private:
    Ui::MainWindow *ui;
    TicTacToe *tictactoe;
    int Zahl = 0;
    bool wurdeGeklicktEins = false;
    bool wurdeGeklicktZwei = false;
    bool wurdeGeklicktDrei = false;
    bool wurdeGeklicktVier = false;
    bool wurdeGeklicktFuenf = false;
    bool wurdeGeklicktSechs = false;
    bool wurdeGeklicktSieben = false;
    bool wurdeGeklicktAcht = false;
    bool wurdeGeklicktNeun = false;
    int gewinneX = 0;
    int gewinneO = 0;





};

#endif // MAINWINDOW_H
