#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QTime>
#include <QLCDNumber>
#include <QKeyEvent>
#include <stdlib.h>
#include <QLabel>
#include <QWidget>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void game();
    ~MainWindow();
    void ender();
    void creat_enemy();
    void keyPressEvent(QKeyEvent *event);

private slots:

    void on_title_end_clicked();

    void on_gamestart_clicked();

    void on_restart_clicked();

    void on_theendend_clicked();

    void Changetime();

    void enemy();

    void move1();
    void move2();
    void move3();
    void move4();
    void move5();
    void move6();
    void move7();
    void move8();
    void move9();
    void move10();
    void move11();
    void move12();
    void move13();
    void move14();
    void move15();
    void move16();
    void move17();
    void move18();
    void move19();

private:
    Ui::MainWindow *ui;
    QTimer *timer, *timer1, *timer2, *timer3, *timer4, *timer5, *timer6, *timer7, *timer8, *timer9, *timer10, *timer11, *timer12, *timer13, *timer14, *timer15, *timer16, *timer17, *timer18, *timer19;
    int count,game_1_palace,game_2_palace,game_3_palace,game_4_palace,game_5_palace,game_6_palace,game_7_palace,game_8_palace,game_9_palace,game_10_palace,game_11_palace,game_12_palace,game_13_palace,game_14_palace,game_15_palace,game_16_palace,game_17_palace,game_18_palace,game_19_palace;
    int i=0,j=0;
    int final=0;
    int which_to_call=1;
    int c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0,c10=0,c11=0,c12=0,c13=0,c14=0,c15=0,c16=0,c17=0,c18=0,c19=0;


};

#endif // MAINWINDOW_H
