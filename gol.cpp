#include "gol.h"
#include "ui_gol.h"

gol::gol(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::gol)
{
    ui->setupUi(this);
}

gol::~gol()
{
    delete ui;
}
