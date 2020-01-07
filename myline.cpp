#include "myline.h"
#include "ui_myline.h"

MyLine::MyLine(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyLine)
{
    ui->setupUi(this);
}

MyLine::~MyLine()
{
    delete ui;
}
