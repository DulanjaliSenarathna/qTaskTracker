#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "linkrecommendation.h"
#include "solutionwidget.h"
#include "myline.h"
#include <QDebug>
#include <QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow{parent}
    , ui{new Ui::MainWindow}
    ,countSolutions{0}
{
    ui->setupUi(this);

    //Initialise first Solution-widget (task without solution makes no sense)
    this->onPushButtonAddSolutionClicked();

    //this->hidePreWidgets();
    //this->hidePostWidgets();

    QObject::connect(this->ui->pushButton_addSolution,&QPushButton::clicked,
                     this, &MainWindow::onPushButtonAddSolutionClicked);

    // QObject::connect(this->ui->pushButton_PreWidgets,&QPushButton::clicked,
     //                this, &MainWindow::onPushButtonPreClicked);

   // QObject::connect(this->ui->pushButton_PostWidgets,&QPushButton::clicked,
               //      this, &MainWindow::onPushButtonPostClicked);

    QObject::connect(this->ui->pushButton_addRecommendation,&QPushButton::clicked,
                     this, &MainWindow::onPushButtonAddRecommendationClicked);

    QObject::connect(this->ui->lineEdit_title, &QLineEdit::textChanged,
                     this, &MainWindow::onTitleEditChange);



}

MainWindow::~MainWindow()
{
    delete ui;
}
/*
void MainWindow::hidePreWidgets()
{
    this->ui->pushButton_PreWidgets->setText("+");
    this->ui->label_pre->setVisible(false);
    this->ui->lineEdit_pre->setVisible(false);
}
void MainWindow::hidePostWidgets()
{
    this->ui->pushButton_PostWidgets->setText("+");
    this->ui->label_post->setVisible(false);
    this->ui->plainTextEdit_post->setVisible(false);

}

void MainWindow::showPreWidgets()
{
    this->ui->pushButton_PreWidgets->setText("-");
    this->ui->label_pre->setVisible(true);
    this->ui->lineEdit_pre->setVisible(true);
}
void MainWindow::showPostWidgets()
{
    this->ui->pushButton_PostWidgets->setText("-");
    this->ui->label_post->setVisible(true);
    this->ui->plainTextEdit_post->setVisible(true);
}

*/

void MainWindow::onPushButtonAddSolutionClicked()
{
    ++countSolutions;

    if(this->ui->verticalLayout_scrollAreaSolution->count()>0)
    {
        this->ui->verticalLayout_scrollAreaSolution->addWidget(new MyLine(this));
    }

    this->ui->verticalLayout_scrollAreaSolution->addWidget (new SolutionWidget(this,countSolutions));
    /*
    QLabel *label = new QLabel{this};
    ++countSolutions;
    label->setText("Solution" + QString::number(countSolutions));

    QVector<QLabel*> labels;

       for(int i=0; i<this->ui->verticalLayout_solutions->count(); i++)

       {
           auto item = this->ui->verticalLayout_solutions->itemAt(i)->widget();

           QLabel *_lab = dynamic_cast<QLabel*>(item);
           if(_lab !=nullptr)
           {
               labels.append(_lab);
           }

       }

       qDebug() << "Labelscount: " << labels.size();

       for(int i=0; i<labels.size(); i++)
       {
           labels.at(i)->setText("Solution" + QString::number(i+1));
       }

     QLineEdit *lineEdit = new QLineEdit{this};

     QPlainTextEdit *plainTextEdit = new QPlainTextEdit{this};

     this->ui->verticalLayout_solutions->addWidget(label);
     this->ui->verticalLayout_solutions->addWidget(plainTextEdit);

     */

}
/*
void MainWindow::onPushButtonPreClicked()
{
  if(this->ui->label_pre->isVisible())
  {
     this->hidePreWidgets();
  }

  else
  {
      this->showPreWidgets();
  }
}
void MainWindow::onPushButtonPostClicked()
{
    if(this->ui->label_post->isVisible())
    {
        this->hidePostWidgets();
    }

    else
    {
        this->showPostWidgets();
    }
}

*/

void MainWindow::onPushButtonAddRecommendationClicked()
{
    if(this->ui->verticalLayout_scrollAreaRecommendation->count()>0)
    {
        this->ui->verticalLayout_scrollAreaRecommendation->addWidget(new MyLine(this));
    }

    this->ui->verticalLayout_scrollAreaRecommendation->addWidget(new LinkRecommendation(this));

}

  void MainWindow::onTitleEditChange()
  {
       QString filename = this->ui->lineEdit_title->text().toLower();
       qDebug() << filename;

       filename.replace(" ","-");
       qDebug() << "After replace:" << filename;

       this->ui->label_filename->setText("File-Name"+filename);
  }


