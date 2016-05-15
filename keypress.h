#ifndef KEYPRESS_H
#define KEYPRESS_H

#include <QDialog>

namespace Ui {
class Keypress;
}

class Keypress : public QDialog
{
    Q_OBJECT

public:
    explicit Keypress(QWidget *parent = 0);
    ~Keypress();

private:
    Ui::Keypress *ui;
};

#endif // KEYPRESS_H
