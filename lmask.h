#ifndef LMASK_H
#define LMASK_H

#include <QWidget>

namespace Ui {
class Lmask;
}

class Lmask : public QWidget
{
    Q_OBJECT

public:
    explicit Lmask(QWidget *parent = 0);
    ~Lmask();

private:
    Ui::Lmask *ui;
};

#endif // LMASK_H
