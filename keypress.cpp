#include "keypress.h"
#include <QKeyEvent>
#include <QApplication>

Keypress::Keypress(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Keypress)
{
    ui->setupUi(this);
}

Keypress::~Keypress()
{
    delete ui;
}
