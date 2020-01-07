#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void onPushButtonAddSolutionClicked();
  //  void onPushButtonPreClicked();
  //  void onPushButtonPostClicked();
    void onPushButtonAddRecommendationClicked();
    void onTitleEditChange();

private:
    unsigned int countSolutions;
    /*
    void hidePreWidgets();
    void hidePostWidgets();

    void showPreWidgets();
    void showPostWidgets();
    */

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
