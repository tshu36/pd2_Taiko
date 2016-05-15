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
void MainWindow::Changetime(){
    if(count>0){
        count=count-1;
        ui->hihi->display(count);
    }
    else{
        ender();
    }
}

void MainWindow::enemy()
{
    if(i>j){
        creat_enemy();
        i=0;
        j=(rand()%3)+1;
        which_to_call=which_to_call+j;
    }
    if(i<=j){
        i=i+1;
    }
}

void MainWindow::ender()
{
    timer->stop();
    ui->label_3->show();
    ui->theendend->show();
    ui->label_2->hide();
    ui->label->hide();
    ui->restart->show();
    ui->gamestart->hide();
    ui->title_end->hide();
    ui->hihi->hide();
    ui->label_4->show();
    ui->final_number->setDigitCount(3);
    ui->final_number->display(final);
    ui->final_number->show();
        final=0;
}

void MainWindow::move1()
{
    if(game_1_palace<=114&&game_1_palace>=107){
        c1=1;
    }
    else{
        c1=0;
    }
        if(game_1_palace<=140){
            game_1_palace++;
            ui->game_001->move(568-game_1_palace*5,94);
        }
        else{
            ui->game_001->hide();
            timer1->stop();
        }
}

void MainWindow::move2()
{
    if(game_2_palace<=114&&game_2_palace>=107){
        c2=1;
    }
    else{
        c2=0;
    }
        if(game_2_palace<=140){
            game_2_palace++;
            ui->game_002->move(568-game_2_palace*5,94);
        }
        else{
            ui->game_002->hide();
            timer2->stop();
        }
}
void MainWindow::move3()
{
    if(game_3_palace<=114&&game_3_palace>=107){
        c3=1;
    }
    else{
        c3=0;
    }
        if(game_3_palace<=140){
            game_3_palace++;
            ui->game_003->move(568-game_3_palace*5,94);
        }
        else{
            ui->game_003->hide();
            timer3->stop();
        }
}
void MainWindow::move4()
{
    if(game_4_palace<=114&&game_4_palace>=107){
        c4=1;
    }
    else{
        c4=0;
    }
    if(game_4_palace<=140){
     game_4_palace++;
     ui->game_004->move(568-game_4_palace*5,94);
    }
    else{
        ui->game_004->hide();
        timer4->stop();
    }
}
void MainWindow::move5()
{
    if(game_5_palace<=114&&game_5_palace>=107){
        c5=1;
    }
    else{
        c5=0;
    }
    if(game_5_palace<=140){
     game_5_palace++;
     ui->game_005->move(568-game_5_palace*5,94);
    }
    else{
        ui->game_005->hide();
        timer5->stop();
    }
}
void MainWindow::move6()
{
    if(game_6_palace<=114&&game_6_palace>=107){
        c6=1;
    }
    else{
        c6=0;
    }
    if(game_6_palace<=140){
     game_6_palace++;
     ui->game_006->move(568-game_6_palace*5,94);
    }
    else{
        ui->game_006->hide();
        timer6->stop();
    }
}void MainWindow::move7()
{
    if(game_7_palace<=114&&game_7_palace>=107){
        c7=1;
    }
    else{
        c7=0;
    }
    if(game_7_palace<=140){
     game_7_palace++;
     ui->game_007->move(568-game_7_palace*5,94);
    }
    else{
        ui->game_007->hide();
        timer7->stop();
    }
}void MainWindow::move8()
{
    if(game_8_palace<=114&&game_8_palace>=107){
        c8=1;
    }
    else{
        c8=0;
    }
    if(game_8_palace<=140){
     game_8_palace++;
     ui->game_008->move(568-game_8_palace*5,94);
    }
    else{
        ui->game_008->hide();
        timer8->stop();
    }
}void MainWindow::move9()
{
    if(game_9_palace<=114&&game_9_palace>=107){
        c9=1;
    }
    else{
        c9=0;
    }
    if(game_9_palace<=140){
     game_9_palace++;
     ui->game_009->move(568-game_9_palace*5,94);
    }
    else{
        ui->game_009->hide();
        timer9->stop();
    }
}void MainWindow::move10()
{
    if(game_10_palace<=114&&game_10_palace>=107){
        c10=1;
    }
    else{
        c10=0;
    }
    if(game_10_palace<=140){
     game_10_palace++;
     ui->game_010->move(568-game_10_palace*5,94);
    }
    else{
        ui->game_010->hide();
        timer10->stop();
    }
}void MainWindow::move11()
{
    if(game_11_palace<=114&&game_11_palace>=107){
        c11=1;
    }
    else{
        c11=0;
    }
    if(game_11_palace<=140){
     game_11_palace++;
     ui->game_011->move(568-game_11_palace*5,94);
    }
    else{
        ui->game_011->hide();
        timer11->stop();
    }
}void MainWindow::move12()
{
    if(game_12_palace<=114&&game_12_palace>=107){
        c12=1;
    }
    else{
        c12=0;
    }
    if(game_12_palace<=140){
     game_12_palace++;
     ui->game_012->move(568-game_12_palace*5,94);
    }
    else{
        ui->game_012->hide();
        timer12->stop();
    }
}void MainWindow::move13()
{
    if(game_13_palace<=114&&game_13_palace>=107){
        c13=1;
    }
    else{
        c13=0;
    }
    if(game_13_palace<=140){
     game_13_palace++;
     ui->game_013->move(568-game_13_palace*5,94);
    }
    else{
        ui->game_013->hide();
        timer13->stop();
    }
}void MainWindow::move14()
{
    if(game_14_palace<=114&&game_14_palace>=107){
        c14=1;
    }
    else{
        c14=0;
    }
    if(game_14_palace<=140){
     game_14_palace++;
     ui->game_014->move(568-game_14_palace*5,94);
    }
    else{
        ui->game_014->hide();
        timer14->stop();
    }
}void MainWindow::move15()
{
    if(game_15_palace<=114&&game_15_palace>=107){
        c15=1;
    }
    else{
        c15=0;
    }
    if(game_15_palace<=140){
     game_15_palace++;
     ui->game_015->move(568-game_15_palace*5,94);
    }
    else{
        ui->game_015->hide();
        timer15->stop();
    }
}void MainWindow::move16()
{
    if(game_16_palace<=114&&game_16_palace>=107){
        c16=1;
    }
    else{
        c16=0;
    }
        if(game_16_palace<=140){
            game_16_palace++;
            ui->game_016->move(568-game_16_palace*5,94);
        }
        else{
            ui->game_016->hide();
            timer16->stop();
        }
}void MainWindow::move17()
{
    if(game_17_palace<=114&&game_17_palace>=107){
        c17=1;
    }
    else{
        c17=0;
    }
        if(game_17_palace<=140){
            game_17_palace++;
            ui->game_017->move(568-game_17_palace*5,94);
        }
        else{
            ui->game_017->hide();
            timer17->stop();
    }
}void MainWindow::move18()
{
    if(game_18_palace<=114&&game_18_palace>=107){
        c18=1;
    }
    else{
        c18=0;
    }
        if(game_18_palace<=140){
            game_18_palace++;
            ui->game_018->move(568-game_18_palace*5,94);
        }
        else{
            ui->game_018->hide();
            timer18->stop();
    }
}void MainWindow::move19()
{
    if(game_19_palace<=114&&game_19_palace>=107){
        c19=1;
    }
    else{
        c19=0;
    }
        if(game_19_palace<=140){
        game_19_palace++;
        ui->game_019->move(568-game_19_palace*5,94);
        }
        else{
            ui->game_019->hide();
            timer19->stop();
        }
}
void MainWindow::creat_enemy()
{
    if(which_to_call==1){
        ui->game_001->show();
        ui->game_001->move(568,94);
        game_1_palace=0;
        timer1= new QTimer;
        timer1->start(20);
        connect(timer1,SIGNAL(timeout()),this,SLOT(move1()));
    }
    if(which_to_call==2){
        ui->game_002->show();
        ui->game_002->move(568,94);
        game_2_palace=0;
        timer2= new QTimer;
        timer2->start(20);
        connect(timer2,SIGNAL(timeout()),this,SLOT(move2()));
    }
    if(which_to_call==3){
        ui->game_003->show();
        ui->game_003->move(568,94);
        game_3_palace=0;
        timer3= new QTimer;
        timer3->start(20);
        connect(timer3,SIGNAL(timeout()),this,SLOT(move3()));
    }
    if(which_to_call==4){
        ui->game_004->show();
        ui->game_004->move(568,94);
        game_4_palace=0;
        timer4= new QTimer;
        timer4->start(20);
        connect(timer4,SIGNAL(timeout()),this,SLOT(move4()));
    }
    if(which_to_call==5){
        ui->game_005->show();
        ui->game_005->move(568,94);
        game_5_palace=0;
        timer5= new QTimer;
        timer5->start(20);
        connect(timer5,SIGNAL(timeout()),this,SLOT(move5()));
    }
    if(which_to_call==6){
        ui->game_006->show();
        ui->game_006->move(568,94);
        game_6_palace=0;
        timer6= new QTimer;
        timer6->start(20);
        connect(timer6,SIGNAL(timeout()),this,SLOT(move6()));
    }
    if(which_to_call==7){
        ui->game_007->show();
        ui->game_007->move(568,94);
        game_7_palace=0;
        timer7= new QTimer;
        timer7->start(20);
        connect(timer7,SIGNAL(timeout()),this,SLOT(move7()));
    }
    if(which_to_call==8){
        ui->game_008->show();
        ui->game_008->move(568,94);
        game_8_palace=0;
        timer8= new QTimer;
        timer8->start(20);
        connect(timer8,SIGNAL(timeout()),this,SLOT(move8()));
    }
    if(which_to_call==9){
        ui->game_009->show();
        ui->game_009->move(568,94);
        game_9_palace=0;
        timer9= new QTimer;
        timer9->start(20);
        connect(timer9,SIGNAL(timeout()),this,SLOT(move9()));
    }
    if(which_to_call==10){
        ui->game_010->show();
        ui->game_010->move(568,94);
        game_10_palace=0;
        timer10= new QTimer;
        timer10->start(20);
        connect(timer10,SIGNAL(timeout()),this,SLOT(move10()));
    }
    if(which_to_call==11){
        ui->game_011->show();
        ui->game_011->move(568,94);
        game_11_palace=0;
        timer11= new QTimer;
        timer11->start(20);
        connect(timer11,SIGNAL(timeout()),this,SLOT(move11()));
    }
    if(which_to_call==12){
        ui->game_012->show();
        ui->game_012->move(568,94);
        game_12_palace=0;
        timer12= new QTimer;
        timer12->start(20);
        connect(timer12,SIGNAL(timeout()),this,SLOT(move12()));
    }
    if(which_to_call==13){
        ui->game_013->show();
        ui->game_013->move(568,94);
        game_13_palace=0;
        timer13= new QTimer;
        timer13->start(20);
        connect(timer13,SIGNAL(timeout()),this,SLOT(move13()));
    }
    if(which_to_call==14){
        ui->game_014->show();
        ui->game_014->move(568,94);
        game_14_palace=0;
        timer14= new QTimer;
        timer14->start(20);
        connect(timer14,SIGNAL(timeout()),this,SLOT(move14()));
    }
    if(which_to_call==15){
        ui->game_015->show();
        ui->game_015->move(568,94);
        game_15_palace=0;
        timer15= new QTimer;
        timer15->start(20);
        connect(timer15,SIGNAL(timeout()),this,SLOT(move15()));
    }
    if(which_to_call==16){
        ui->game_016->show();
        ui->game_016->move(568,94);
        game_16_palace=0;
        timer16= new QTimer;
        timer16->start(20);
        connect(timer16,SIGNAL(timeout()),this,SLOT(move16()));
    }
    if(which_to_call==17){
        ui->game_017->show();
        ui->game_017->move(568,94);
        game_17_palace=0;
        timer17= new QTimer;
        timer17->start(20);
        connect(timer17,SIGNAL(timeout()),this,SLOT(move17()));
    }
    if(which_to_call==18){
        ui->game_018->show();
        ui->game_018->move(568,94);
        game_18_palace=0;
        timer18= new QTimer;
        timer18->start(20);
        connect(timer18,SIGNAL(timeout()),this,SLOT(move18()));
    }
    if(which_to_call==19){
        ui->game_019->show();
        ui->game_019->move(568,94);
        game_19_palace=0;
        timer19= new QTimer;
        timer19->start(20);
        connect(timer19,SIGNAL(timeout()),this,SLOT(move19()));
    }
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    if(event->key()==Qt::Key_1){
        if(c1==1){
            c1=0;
            final=final+10;
            timer1->stop();
            ui->game_001->hide();
            event->accept();
        }
        if(c3==1){
            c3=0;
            final=final+10;
            timer3->stop();
            ui->game_003->hide();
            event->accept();
        }
        if(c6==1){
            c6=0;
            final=final+10;
            timer6->stop();
            ui->game_006->hide();
            event->accept();
        }
        if(c10==1){
            c10=0;
            timer10->stop();
            final=final+10;
            ui->game_010->hide();
            event->accept();
        }
        if(c13==1){
            c13=0;
            final=final+10;
            timer13->stop();
            ui->game_013->hide();
            event->accept();
        }
        if(c14==1){
            c14=0;
            final=final+10;
            timer14->stop();
            ui->game_014->hide();
            event->accept();
        }
        if(c15==1){
            c15=0;
            final=final+10;
            timer15->stop();
            ui->game_015->hide();
            event->accept();
        }
        if(c16==1){
            c16=0;
            final=final+10;
            timer16->stop();
            ui->game_016->hide();
            event->accept();
        }
        if(c17==1){
            c17=0;
            final=final+10;
            timer17->stop();
            ui->game_017->hide();
            event->accept();
        }
        if(c18==1){
            c18=0;
            final=final+10;
            timer18->stop();
            ui->game_018->hide();
            event->accept();
        }
        if(c19==1){
            c19=0;
            final=final+10;
            timer19->stop();
            ui->game_019->hide();
            event->accept();
        }
    }
    if(event->key()==Qt::Key_2){
        if(c2==1){
            c2=0;
            final=final+10;
            timer2->stop();
            ui->game_002->hide();
            event->accept();
        }
        if(c4==1){
            c4=0;
            final=final+10;
            timer4->stop();
            ui->game_004->hide();
            event->accept();
        }
        if(c5==1){
            c5=0;
            final=final+10;
            timer5->stop();
            ui->game_005->hide();
            event->accept();
        }
        if(c7==1){
            c7=0;
            final=final+10;
            timer7->stop();
            ui->game_007->hide();
            event->accept();
        }
        if(c8==1){
            c8=0;
            final=final+10;
            timer8->stop();
            ui->game_008->hide();
            event->accept();
        }
        if(c9==1){
            c9=0;
            final=final+10;
            timer9->stop();
            ui->game_009->hide();
            event->accept();
        }
        if(c11==1){
            c11=0;
            final=final+10;
            timer11->stop();
            ui->game_011->hide();
            event->accept();
        }
        if(c12==1){
            c12=0;
            final=final+10;
            timer12->stop();
            ui->game_012->hide();
            event->accept();
        }
    }
}






void MainWindow::game()
{
    final=0;
    which_to_call=1;
    timer = new QTimer;
    timer->start(1000);
    count=30;
    ui->hihi->setDigitCount(2);
    ui->hihi->display(count);
    connect(timer,SIGNAL(timeout()),this,SLOT(enemy()));
    connect(timer, SIGNAL(timeout()), this, SLOT(Changetime()));
}

void MainWindow::on_title_end_clicked()
{
    exit(0);
}

void MainWindow::on_gamestart_clicked()
{
    ui->gamestart->hide();
    ui->title_end->hide();
    ui->restart->hide();
    ui->theendend->hide();
    ui->label->hide();
    ui->label_3->hide();
    ui->label_2->show();
    ui->final_number->hide();
    ui->label_4->hide();
    ui->hihi->show();
    game();
}

void MainWindow::on_restart_clicked()
{
    ui->label_2->show();
    ui->label->hide();
    ui->label_3->hide();
    ui->label_4->hide();
    ui->restart->hide();
    ui->gamestart->hide();
    ui->final_number->hide();
    ui->title_end->hide();
    ui->theendend->hide();
    ui->hihi->show();
    game();

}

void MainWindow::on_theendend_clicked()
{
    ui->label->show();
    ui->label_4->hide();
    ui->gamestart->show();
    ui->title_end->show();
    ui->label_3->hide();
    ui->label_2->hide();
    ui->theendend->hide();
    ui->restart->hide();
    ui->hihi->hide();
    ui->final_number->hide();
}
