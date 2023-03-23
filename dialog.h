#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QComboBox>
#include <QPixmap>
#include <QLabel>
#include <QGraphicsView>
#include <QGraphicsPixmapItem>
#include <QString>
#include <QFileInfo>
#include <QDir>
#include "logger.h"
#include <QPushButton>
#include <QImage>
#include <QToolButton>
#include <QtDebug>
#include <QToolTip>
#include <QSlider>
#include <QLineEdit>
#include <iostream>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:

    int i=0;
    void important(double alpha,int beta, std::string abspath);
    QSlider *brightness;
    QSlider *contrast;
    void copy_widget(QListWidget *widget);
    QPushButton *button;
    QComboBox *box;
            void add_item();
    explicit Dialog(QWidget *parent = nullptr);
    QGraphicsView *big;
    QLabel *name;
    QListWidget *listwidget;
    void changed_color(QLabel *label);
    ~Dialog();






private slots:
    //void on_brightness_valueChanged(int value);



    void on_forward_clicked();

    //void on_contrast_valueChanged(int value);

    void on_backward_clicked();


    //void on_he_clicked();

    //void on_clahe_clicked();

    //void on_testctr_valueChanged(int value);
    void show_image(cv::Mat input_image,int i);

    void on_contrast_valueChanged(int value);

    void on_brightness_valueChanged(int value);



    //void on_first_img_clicked();

    void on_listWidget_itemClicked(QListWidgetItem *item);

    void on_first_img_clicked();

private:
    logger l;
    QStringList intestine_list={"Thân vị cao","Thân vị giữa","Thân vị thấp","Thân vị rút","Hang vị trước",
                               "Hang vị sau","Hang vị bờ cong nhỏ","Hang vị bờ cong lớn","Môn vị","Tâm vị","Góc bờ cong nhỏ",
                               "Bờ cong nhỏ phần đứng","Phình vị","Bệnh 1","Bệnh 2","Bệnh 3"};
    QGraphicsScene *scene=new QGraphicsScene;
    Ui::Dialog *ui;

};

#endif // DIALOG_H
