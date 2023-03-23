#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidget>
#include <QComboBox>
#include <QGraphicsView>
#include <QLabel>
#include <QDebug>
#include <QFileDialog>
#include <QDir>
#include <QPixmap>
#include <QSplashScreen>
#include <QGraphicsPixmapItem>
#include <opencv2/opencv.hpp>
#include <opencv2/dnn/dnn.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <QtConcurrent>
#include <QFuture>
#include <QMessageBox>
#include <QSettings>
#include <QAbstractItemModel>
#include <QScrollBar>
#include <QMenu>
#include <QImageReader>
//#undef slots
//#include <torch/torch.h>
//#include <torch/script.h>
//#define slots Q_SLOTS
#include "dialog.h"
#include "logger.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    //QFile log=QFile("research.log");
    QDateTime timer;



    QString last_dir;


    QString filename;
    void setTabName();
    void find_dis(int, int  );
    void write_last_dir(QString &dir);
    void read_last_dir();


    QStringList read_illness();

    QString fullpath;
    void write_numbers();
    void read_numbers();
    void double_click_item(QListWidgetItem* item, QListWidget* widget);
    void single_click_item(QListWidgetItem* item);
    void load_images(QString img_prefix);
    QImage crop_images(QString each_image);

    void loop_each_widget(QListWidget *widget,QString suffix,int plus);
    void predict_image(const QFileInfoList &input);
    void showimage(QString img, QGraphicsView *view,QLabel *name);
    void showimagef(QString img, QGraphicsView *view, QLabel *output);

    void add_item(int,const QFileInfo &info);
    void find_ill(QListWidget *widget,QComboBox *box1,QComboBox *box2,QCheckBox *checkbox,QLineEdit *edit);
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void plus();

    void minus();

    void on_done_clicked();

    void on_quit_clicked();

    void on_listWidget_itemDoubleClicked(QListWidgetItem *item);

    void on_tv_cao_itemDoubleClicked(QListWidgetItem *item);

    void on_tv_giua_itemDoubleClicked(QListWidgetItem *item);

    void on_tv_thap_itemDoubleClicked(QListWidgetItem *item);

    void on_tv_rut_itemDoubleClicked(QListWidgetItem *item);

    void on_hv_truoc_itemDoubleClicked(QListWidgetItem *item);

    void on_hv_sau_itemDoubleClicked(QListWidgetItem *item);

    void on_hv_bcn_itemDoubleClicked(QListWidgetItem *item);

    void on_hv_bcl_itemDoubleClicked(QListWidgetItem *item);

    void on_monvi_itemDoubleClicked(QListWidgetItem *item);

    void on_tamvi_itemDoubleClicked(QListWidgetItem *item);

    void on_bcn_gn_itemDoubleClicked(QListWidgetItem *item);

    void on_bcn_pd_itemDoubleClicked(QListWidgetItem *item);

    void on_inhvi_itemDoubleClicked(QListWidgetItem *item);


    void on_folder_triggered();

    void on_actionrun_triggered();

    void on_than_vi_itemDoubleClicked(QListWidgetItem *item);

    void on_hang_vi_itemDoubleClicked(QListWidgetItem *item);

    void on_mon_vi_itemDoubleClicked(QListWidgetItem *item);

    void on_tam_vi_itemDoubleClicked(QListWidgetItem *item);

    void on_bo_cong_nho_itemDoubleClicked(QListWidgetItem *item);

    void on_phinh_vi_itemDoubleClicked(QListWidgetItem *item);

    void on_listWidget_itemClicked(QListWidgetItem *item);

    void on_than_vi_itemClicked(QListWidgetItem *item);

    void on_hang_vi_itemClicked(QListWidgetItem *item);

    void on_mon_vi_itemClicked(QListWidgetItem *item);

    void on_tam_vi_itemClicked(QListWidgetItem *item);

    void on_bo_cong_nho_itemClicked(QListWidgetItem *item);

    void on_phinh_vi_itemClicked(QListWidgetItem *item);

    void on_tv_cao_itemClicked(QListWidgetItem *item);

    void on_tv_giua_itemClicked(QListWidgetItem *item);

    void on_tv_thap_itemClicked(QListWidgetItem *item);

    void on_tv_rut_itemClicked(QListWidgetItem *item);

    void on_inhvi_itemClicked(QListWidgetItem *item);

    void on_hv_truoc_itemClicked(QListWidgetItem *item);

    void on_hv_sau_itemClicked(QListWidgetItem *item);

    void on_hv_bcn_itemClicked(QListWidgetItem *item);

    void on_hv_bcl_itemClicked(QListWidgetItem *item);

    void on_monvi_itemClicked(QListWidgetItem *item);

    void on_tamvi_itemClicked(QListWidgetItem *item);

    void on_bcn_gn_itemClicked(QListWidgetItem *item);

    void on_bcn_pd_itemClicked(QListWidgetItem *item);




private:

    logger l;
    QPointer<Dialog> dlg = new Dialog;
    QString pbFile;
    std::string ptFilePath = "mobilenetHVAIjit.pt";
    //QString pbTxt;
    cv::Mat matrix;
    cv::dnn::Net neural_net;
    const int height = 240;
    const int width = 320;
//    const int height = 224;
//    const int width = 224;
    const double inScaleFactor=1.0/255 ;

    QString workingfolder;

    double loadingtime;
    int count=0;
    //QDateTime timer;


    QFile illness=QFile("illness.txt");
    QFile number=QFile("number.log");
    QFile pbtask=QFile("pb.txt");

    QString bn;
    QStringList ill_name;

    QStringList ill_list;
    /*QStringList intestine_list={"Không","Thân vị cao","Thân vị giữa","Thân vị thấp","Thân vị rút","Hang vị trước",
                               "Hang vị sau","Hang vị bờ cong nhỏ","Hang vị bờ cong lớn","Môn vị","Tâm vị","Góc bờ cong nhỏ",
                               "Bờ cong nhỏ phần đứng","Phình vị"};*/
    QStringList intestine_list = {"Không","Thân vị","Hang vị","Môn vị","Tâm vị","Góc bờ cong nhỏ","Phình vị"};
    QGraphicsScene* scene = new QGraphicsScene;
    static QFileInfoList infolist;
    QLabel *spacer=new QLabel;
    QLabel *spacer2=new QLabel;
    QString bn1;
    QLabel *mbn=new QLabel;
    QLineEdit *edit=new QLineEdit;

    Ui::MainWindow *ui;
};


#endif // MAINWINDOW_H
