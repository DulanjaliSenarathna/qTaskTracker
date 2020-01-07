#ifndef LINKRECOMMENDATION_H
#define LINKRECOMMENDATION_H

#include <QWidget>

namespace Ui {
class LinkRecommendation;
}

class LinkRecommendation : public QWidget
{
    Q_OBJECT

public:
    explicit LinkRecommendation(QWidget *parent = nullptr);
    ~LinkRecommendation();

private:
    Ui::LinkRecommendation *ui;
};

#endif // LINKRECOMMENDATION_H
