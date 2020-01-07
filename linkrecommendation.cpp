#include "linkrecommendation.h"
#include "ui_linkrecommendation.h"

LinkRecommendation::LinkRecommendation(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LinkRecommendation)
{
    ui->setupUi(this);
}

LinkRecommendation::~LinkRecommendation()
{
    delete ui;
}
