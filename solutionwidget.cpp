#include "solutionwidget.h"
#include "ui_solutionwidget.h"

SolutionWidget::SolutionWidget(QWidget *parent, const int solutionNumber) :
    QWidget(parent),
    ui(new Ui::SolutionWidget)
{
    ui->setupUi(this);

    this->ui->label_solution->setText(this->ui->label_solution->text()
                                      + " "
                                      + QString::number(solutionNumber));
}

SolutionWidget::~SolutionWidget()
{
    delete ui;
}
