#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDialog>
#include <QMessageBox>
#include <QDebug>

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
        //        QDialog * dlg2 = new QDialog(this);
        //        dlg2->resize(300,200);
        //        dlg2->show();
        //        dlg2->setAttribute(Qt::WA_DeleteOnClose);

        // 消息对话框
        // 错误对话框
        //QMessageBox::critical(this,"ctitical","错误");

        // 消息对话框
        // QMessageBox::information(this,"info","信息");

        // 提问对话框
        // 参数：1.父亲 2.标题 3.提示内容 4.按键类型 5.默认关联回车按键
        //        if (QMessageBox::Save ==  QMessageBox::question(this,"question","提问",QMessageBox::Save | QMessageBox::Cancel,QMessageBox::Save))
        //        {
        //            qDebug()<< "选择的是保存";
        //        }
        //        else
        //        {
        //            qDebug()<<"选择的是取消";
        //        }

        // 警告对话框
        QMessageBox::warning(this,"warning","警告");

    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

