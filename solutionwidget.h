#ifndef SOLUTIONWIDGET_H
#define SOLUTIONWIDGET_H

#include <QWidget>

namespace Ui {
class SolutionWidget;
}

class SolutionWidget : public QWidget
{
    Q_OBJECT

public:
    explicit SolutionWidget(QWidget *parent, const int solutionNumber);
    ~SolutionWidget();

private:
    Ui::SolutionWidget *ui;
};

#endif // SOLUTIONWIDGET_H
