#include "lmask.h"
#include "ui_lmask.h"

Lmask::Lmask(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Lmask)
{
    ui->setupUi(this);
}

Lmask::~Lmask()
{
    delete ui;
}
