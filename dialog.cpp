#include "dialog.h"
#include "mainwindow.h"
#include "ui_dialog.h"
#include <QFileInfo>
#include <QDir>
#include <QImage>
#include <QToolButton>
#include <QtDebug>
#include <iostream>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{

    QApplication::processEvents();

    ui->setupUi(this);
    big= ui->graphicsView;

    name=ui->name;

    ui->listWidget->setIconSize(QSize(230,190));
    ui->listWidget->setGridSize(QSize(230,195));
    ui->ctr_num->setText("0");
    ui->brn_num->setText("0");
    int n=ui->listWidget->count();

        for (int a=0;a<n;a++) {
            QString st=ui->listWidget->item(i)->text();
            QString lb=ui->name->text();
            if(st == lb){
                i=a;
            break;
            }
        }


}



Dialog::~Dialog()
{
    delete ui;
}
void Dialog::show_image(cv::Mat input_image,int num){
    QImage image(input_image.data,input_image.cols,input_image.rows,input_image.step,QImage::Format_RGB888);
    ui->listWidget->item(num)->setIcon(QPixmap::fromImage(image));
    QGraphicsPixmapItem *item=new QGraphicsPixmapItem(QPixmap::fromImage(image));
    scene->clear();
    scene->addItem(item);
    big->setScene(scene);
    big->fitInView(item,Qt::KeepAspectRatio);

}
void Dialog::copy_widget(QListWidget *widget){
    for (int a=0;a< widget->count();a++) {
        QListWidgetItem *item =new QListWidgetItem;
        item=widget->item(a)->clone();
        ui->listWidget->addItem(item);
    }

}


void Dialog::on_forward_clicked()
{   /*ui->contrast->setValue(0);
    ui->brightness->setValue(0);*/
    QListWidgetItem *item=new QListWidgetItem;
    int n=ui->listWidget->count();
    ++i;
    if(i == n-1){
        i=0;
    }
    item=ui->listWidget->item(i);
    ui->listWidget->setCurrentItem(item);
    MainWindow mw;
    mw.showimage(item->text(),ui->graphicsView,ui->name);
    ui->contrast->setValue(0);
    ui->brightness->setValue(0);
    l.forward(item);
}



void Dialog::on_backward_clicked()
{
    /*ui->contrast->setValue(0);
    ui->brightness->setValue(0);*/
    QListWidgetItem* item=new QListWidgetItem;
    int n=ui->listWidget->count();
    --i;
    if(i==-1){
        i=n-1;
    }
    item=ui->listWidget->item(i);
    ui->listWidget->setCurrentItem(item);
    //QFileInfo info(item->text());




    MainWindow mw;


    mw.showimage(item->text(),ui->graphicsView,ui->name);
    ui->contrast->setValue(0);
    ui->brightness->setValue(0);
    l.backward(item);
    //mw.backward();
    //delete item;
}


void Dialog::on_contrast_valueChanged(int value)
{
    ui->ctr_num->setText(QString::number(value));
    MainWindow mw;


    double a=259*(static_cast<double>(value)+255);
    double b=255*(259-static_cast<double>(value));
    double val= a/b;

    std::string abspath=mw.fullpath.toStdString();
    cv::Mat img,src;
    img=cv::imread(abspath);
    cv::cvtColor(img, src, cv::COLOR_BGR2RGB);
    std::vector<cv::Mat> channels;
    split(src,channels);
    channels[0]=val*(channels[0]-128)+128;
    channels[1]=val*(channels[1]-128)+128;
    channels[2]=val*(channels[2]-128)+128;
    merge(channels,src);
    cv::threshold(src,src,255,255,2);
    show_image(src,i);
    l.contrast(value);
}

void Dialog::on_brightness_valueChanged(int value)
{

    ui->brn_num->setText(QString::number(value));

    MainWindow mw;


    std::string abspath=mw.fullpath.toStdString();
     cv::Mat img,src;
     img=cv::imread(abspath);
     cv::cvtColor(img, src, cv::COLOR_BGR2RGB);
     std::vector<cv::Mat> channels;
      split(src,channels);
      channels[0]=channels[0]+value;
      channels[1]=channels[1]+value;
      channels[2]=channels[2]+value;
      merge(channels,src);
      cv::threshold(src,src,255,255,2);
      show_image(src,i);

}
void Dialog::on_listWidget_itemClicked(QListWidgetItem *item)
{

}

void Dialog::on_first_img_clicked()
{
    ui->brightness->setValue(0);
    ui->contrast->setValue(0);
}
