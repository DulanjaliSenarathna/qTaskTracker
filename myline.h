#ifndef MYLINE_H
#define MYLINE_H

#include <QWidget>

namespace Ui {
class MyLine;
}

class MyLine : public QWidget
{
    Q_OBJECT

public:
    explicit MyLine(QWidget *parent = nullptr);
    ~MyLine();

private:
    Ui::MyLine *ui;
};

#endif // MYLINE_H
