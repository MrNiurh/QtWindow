#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->actionnew->setIcon(QIcon(":/icon/reload.png"));
    ui->actionopen->setIcon(QIcon(":/icon/image_l.png"));

    connect(ui->actionnew,&QAction::triggered,[=](){
        // 模态对话框
        //  QDialog dlg(this);
        //  dlg.resize(300,200);
        //  dlg.exec();

        // 非模态对话框
        QDialog * dlg2 = new QDialog(this);
        dlg2->resize(300,200);
        dlg2->show();
        dlg2->setAttribute(Qt::WA_DeleteOnClose);
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

