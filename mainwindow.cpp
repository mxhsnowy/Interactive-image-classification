#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    //configure main widget

    ui->setupUi(this);

    QString appDir=QCoreApplication::applicationDirPath();
    pbFile = appDir + "/HL7Q_sgd.pb";
    pbtask.open(QFile::WriteOnly);
    QTextStream stream(&pbtask);
    stream<<pbFile<<endl;
    pbtask.close();
    spacer2->setMinimumWidth(10);
    ui->mainToolBar->setStyleSheet("background:rgb(170, 255, 255);");
    mbn->setText("ID Bệnh nhân");
    QFont font("Arial",11);
    mbn->setFont(font);
    mbn->setSizePolicy(QSizePolicy::Preferred,QSizePolicy::Preferred);
    edit->setSizePolicy(QSizePolicy::MinimumExpanding,QSizePolicy::Fixed);
    QFont fonte("Arial",11);
    edit->setFont(fonte);
    edit->setMinimumHeight(30);
    edit->setMaximumWidth(60);
    edit->setStyleSheet("background:white;");

    ui->mainToolBar->addWidget(spacer);

    ui->mainToolBar->addWidget(mbn);
    ui->mainToolBar->addWidget(spacer2);
    ui->mainToolBar->addWidget(edit);


    ui->listWidget->verticalScrollBar()->setSingleStep(8);

    connect(ui->listWidget,SIGNAL(customContextMenuRequested(QPoint)),this,SLOT(show_context_menu(QPoint)));
    //end
    //set up main window
      //set up comboboxes
    ill_name=read_illness();


    ui->so_luong->setText(QString::number(count));

    read_numbers();
    connect(ui->tv_cao->model(),&QAbstractItemModel::rowsInserted,this,&MainWindow::plus);
   connect(ui->tv_cao->model(),&QAbstractItemModel::rowsInserted,[this](){l.act_logger(1);});

    connect(ui->tv_giua->model(),&QAbstractItemModel::rowsInserted,this,&MainWindow::plus);
    connect(ui->tv_giua->model(),&QAbstractItemModel::rowsInserted,[this](){l.act_logger(2);});

    connect(ui->tv_thap->model(),&QAbstractItemModel::rowsInserted,this,&MainWindow::plus);
     connect(ui->tv_thap->model(),&QAbstractItemModel::rowsInserted,[this](){l.act_logger(3);});

    connect(ui->tv_rut->model(),&QAbstractItemModel::rowsInserted,this,&MainWindow::plus);
     connect(ui->tv_rut->model(),&QAbstractItemModel::rowsInserted,[this](){l.act_logger(4);});

    connect(ui->hv_bcl->model(),&QAbstractItemModel::rowsInserted,this,&MainWindow::plus);
     connect(ui->hv_bcl->model(),&QAbstractItemModel::rowsInserted,[this](){l.act_logger(8);});

    connect(ui->hv_bcn->model(),&QAbstractItemModel::rowsInserted,this,&MainWindow::plus);
     connect(ui->hv_bcn->model(),&QAbstractItemModel::rowsInserted,[this](){l.act_logger(7);});

    connect(ui->hv_truoc->model(),&QAbstractItemModel::rowsInserted,this,&MainWindow::plus);
     connect(ui->hv_truoc->model(),&QAbstractItemModel::rowsInserted,[this](){l.act_logger(5);});

    connect(ui->hv_sau->model(),&QAbstractItemModel::rowsInserted,this,&MainWindow::plus);
     connect(ui->hv_sau->model(),&QAbstractItemModel::rowsInserted,[this](){l.act_logger(6);});

    connect(ui->monvi->model(),&QAbstractItemModel::rowsInserted,this,&MainWindow::plus);
     connect(ui->monvi->model(),&QAbstractItemModel::rowsInserted,[this](){l.act_logger(9);});
//connect(ui->monvi->model(),&QAbstractItemModel::rowsInserted,[=](){this->act_logger(ui->monvi);});
    connect(ui->tamvi->model(),&QAbstractItemModel::rowsInserted,this,&MainWindow::plus);
     connect(ui->tamvi->model(),&QAbstractItemModel::rowsInserted,[this](){l.act_logger(10);});
//connect(ui->tamvi->model(),&QAbstractItemModel::rowsInserted,[=](){this->act_logger(ui->tamvi);});
    connect(ui->inhvi->model(),&QAbstractItemModel::rowsInserted,this,&MainWindow::plus);
     connect(ui->inhvi->model(),&QAbstractItemModel::rowsInserted,[this](){l.act_logger(13);});
//connect(ui->inhvi->model(),&QAbstractItemModel::rowsInserted,[=](){this->act_logger(ui->inhvi);});
    connect(ui->bcn_gn->model(),&QAbstractItemModel::rowsInserted,this,&MainWindow::plus);
     connect(ui->bcn_gn->model(),&QAbstractItemModel::rowsInserted,[this](){l.act_logger(11);});
//connect(ui->bcn_gn->model(),&QAbstractItemModel::rowsInserted,[=](){this->act_logger(ui->bcn_gn);});
    connect(ui->bcn_pd->model(),&QAbstractItemModel::rowsInserted,this,&MainWindow::plus);
     connect(ui->bcn_pd->model(),&QAbstractItemModel::rowsInserted,[this](){l.act_logger(12);});
//connect(ui->bcn_pd->model(),&QAbstractItemModel::rowsInserted,[=](){this->act_logger(ui->bcn_pd);});

    connect(ui->listWidget->model(),&QAbstractItemModel::rowsInserted,[this](){l.act_logger(17);});
    connect(ui->than_vi->model(),&QAbstractItemModel::rowsInserted,[this](){l.act_logger(18);});
    connect(ui->hang_vi->model(),&QAbstractItemModel::rowsInserted,[this](){l.act_logger(19);});
    connect(ui->tam_vi->model(),&QAbstractItemModel::rowsInserted,[this](){l.act_logger(20);});
    connect(ui->mon_vi->model(),&QAbstractItemModel::rowsInserted,[this](){l.act_logger(21);});
    connect(ui->bo_cong_nho->model(),&QAbstractItemModel::rowsInserted,[this](){l.act_logger(22);});
    connect(ui->phinh_vi->model(),&QAbstractItemModel::rowsInserted,[this](){l.act_logger(23);});
//connect(ui->benh_3->model(),&QAbstractItemModel::rowsInserted,[=](){this->act_logger(ui->benh_3);});


    connect(ui->tv_cao->model(),&QAbstractItemModel::rowsRemoved,this,&MainWindow::minus);
    connect(ui->tv_cao->model(),&QAbstractItemModel::rowsRemoved,[this](){l.act_out_logger(1);});
    connect(ui->tv_giua->model(),&QAbstractItemModel::rowsRemoved,this,&MainWindow::minus);
    connect(ui->tv_giua->model(),&QAbstractItemModel::rowsRemoved,[this](){l.act_out_logger(2);});//connect(ui->tv_giua->model(),&QAbstractItemModel::rowsRemoved,[=](){this->act_out_logger(ui->tv_giua);});
    connect(ui->tv_thap->model(),&QAbstractItemModel::rowsRemoved,this,&MainWindow::minus);
    connect(ui->tv_thap->model(),&QAbstractItemModel::rowsRemoved,[this](){l.act_out_logger(3);});//connect(ui->tv_thap->model(),&QAbstractItemModel::rowsRemoved,[=](){this->act_out_logger(ui->tv_thap);});
    connect(ui->tv_rut->model(),&QAbstractItemModel::rowsRemoved,this,&MainWindow::minus);
    connect(ui->tv_rut->model(),&QAbstractItemModel::rowsRemoved,[this](){l.act_out_logger(4);});//connect(ui->tv_rut->model(),&QAbstractItemModel::rowsRemoved,[=](){this->act_out_logger(ui->tv_rut);});
    connect(ui->hv_bcl->model(),&QAbstractItemModel::rowsRemoved,this,&MainWindow::minus);
    connect(ui->hv_bcl->model(),&QAbstractItemModel::rowsRemoved,[this](){l.act_out_logger(8);});//connect(ui->hv_bcl->model(),&QAbstractItemModel::rowsRemoved,[=](){this->act_out_logger(ui->hv_bcl);});
    connect(ui->hv_bcn->model(),&QAbstractItemModel::rowsRemoved,this,&MainWindow::minus);
    connect(ui->hv_bcn->model(),&QAbstractItemModel::rowsRemoved,[this](){l.act_out_logger(7);});   //connect(ui->hv_bcn->model(),&QAbstractItemModel::rowsRemoved,[=](){this->act_out_logger(ui->hv_bcn);});
    connect(ui->hv_truoc->model(),&QAbstractItemModel::rowsRemoved,this,&MainWindow::minus);
    connect(ui->hv_truoc->model(),&QAbstractItemModel::rowsRemoved,[this](){l.act_out_logger(5);});   //connect(ui->hv_truoc->model(),&QAbstractItemModel::rowsRemoved,[=](){this->act_out_logger(ui->hv_truoc);});
    connect(ui->hv_sau->model(),&QAbstractItemModel::rowsRemoved,this,&MainWindow::minus);
    connect(ui->hv_sau->model(),&QAbstractItemModel::rowsRemoved,[this](){l.act_out_logger(6);});   //connect(ui->hv_sau->model(),&QAbstractItemModel::rowsRemoved,[=](){this->act_out_logger(ui->hv_sau);});
    connect(ui->monvi->model(),&QAbstractItemModel::rowsRemoved,this,&MainWindow::minus);
    connect(ui->monvi->model(),&QAbstractItemModel::rowsRemoved,[this](){l.act_out_logger(9);});   //connect(ui->monvi->model(),&QAbstractItemModel::rowsRemoved,[=](){this->act_out_logger(ui->monvi);});
    connect(ui->tamvi->model(),&QAbstractItemModel::rowsRemoved,this,&MainWindow::minus);
    connect(ui->tamvi->model(),&QAbstractItemModel::rowsRemoved,[this](){l.act_out_logger(10);});   //connect(ui->tamvi->model(),&QAbstractItemModel::rowsRemoved,[=](){this->act_out_logger(ui->tamvi);});
    connect(ui->inhvi->model(),&QAbstractItemModel::rowsRemoved,this,&MainWindow::minus);
    connect(ui->inhvi->model(),&QAbstractItemModel::rowsRemoved,[this](){l.act_out_logger(13);});   //connect(ui->inhvi->model(),&QAbstractItemModel::rowsRemoved,[=](){this->act_out_logger(ui->inhvi);});
    connect(ui->bcn_gn->model(),&QAbstractItemModel::rowsRemoved,this,&MainWindow::minus);
    connect(ui->bcn_gn->model(),&QAbstractItemModel::rowsRemoved,[this](){l.act_out_logger(11);});   //connect(ui->bcn_gn->model(),&QAbstractItemModel::rowsRemoved,[=](){this->act_out_logger(ui->bcn_gn);});
    connect(ui->bcn_pd->model(),&QAbstractItemModel::rowsRemoved,this,&MainWindow::minus);
    connect(ui->bcn_pd->model(),&QAbstractItemModel::rowsRemoved,[this](){l.act_out_logger(12);});   //connect(ui->bcn_pd->model(),&QAbstractItemModel::rowsRemoved,[=](){this->act_out_logger(ui->bcn_pd);});
    connect(ui->listWidget->model(),&QAbstractItemModel::rowsRemoved,[this](){l.act_out_logger(17);});
    connect(ui->than_vi->model(),&QAbstractItemModel::rowsRemoved,[this](){l.act_out_logger(18);});
    connect(ui->hang_vi->model(),&QAbstractItemModel::rowsRemoved,[this](){l.act_out_logger(19);});
    connect(ui->tam_vi->model(),&QAbstractItemModel::rowsRemoved,[this](){l.act_out_logger(20);});
    connect(ui->mon_vi->model(),&QAbstractItemModel::rowsRemoved,[this](){l.act_out_logger(21);});
    connect(ui->bo_cong_nho->model(),&QAbstractItemModel::rowsRemoved,[this](){l.act_out_logger(22);});
    connect(ui->phinh_vi->model(),&QAbstractItemModel::rowsRemoved,[this](){l.act_out_logger(23);});

}

MainWindow::~MainWindow()
{
    //=new Dialog;
    l.exit();
    write_numbers();

    delete ui;


    //dlg->~Dialog();
}

QFileInfoList MainWindow::infolist;

void MainWindow::write_numbers(){
    //QFile file("number.txt");
    number.open(QFile::WriteOnly|QFile::Truncate);
    QTextStream stream(&number);

    stream<<edit->text();
    number.close();

}

void MainWindow::read_numbers(){

    number.open(QFile::ReadOnly);

    QTextStream stream(&number);
    QString num=stream.readAll();
    edit->setText(num);
    number.close();


}


QStringList MainWindow::read_illness(){  //reading illness from file
    QStringList list;

    QTextStream stream(&illness);
    if(illness.open(QIODevice::ReadOnly)){
    while(illness.isOpen()){
        QString line=stream.readLine();
        if(line.isNull()){
            break;
        }
        else {
            list.append(line);
        }
    }
    illness.close();
    }
    return list;
}

void MainWindow::plus(){
    ++count;
    ui->so_luong->setText(QString::number(count));
}

void MainWindow::minus(){
    --count;
    ui->so_luong->setText(QString::number(count));
}


void MainWindow::add_item(int input,const QFileInfo &info){ // the most important fuction
    QListWidget *widget=nullptr;
    switch (input) {
    case 0:
        widget=ui->than_vi;
        break;
    case 1:
        widget=ui->hang_vi;
        break;
    case 2:
        widget=ui->mon_vi;
        break;
    case 3:
        widget=ui->tam_vi;
        break;
    case 4:
        widget=ui->bo_cong_nho;
        break;
    case 5:
        widget=ui->bo_cong_lon;
        break;
    case 6:
        widget=ui->phinh_vi;
        break;
    }
    delete(ui->listWidget->takeItem(0));
    widget->addItem(new QListWidgetItem(QIcon(info.absoluteFilePath()),info.fileName()));

}

//torch::Tensor openCV2Torch(cv::Mat& inputImg){
//    /**
//     * @brief Convert openCV Mat to torch Tensorflow and permute axis
//     * @param inputImg cv::Mat
//     */
//    inputImg.convertTo(inputImg, CV_32FC3, 1.0f / 255.0f);
//    auto outputTensor = torch::from_blob(inputImg.data, {1, inputImg.rows, inputImg.cols, inputImg.channels()}).clone();
//    outputTensor = outputTensor.permute({0, 3, 1, 2});
//    return outputTensor;
//}

//cv::Mat readAnImage(const std::string& imgPath){
//    cv::Mat image = cv::imread(imgPath);
//    cv::cvtColor(image, image, cv::COLOR_BGR2RGB);
//    return image;
//}

//torch::Tensor cvMat2Torch(cv::Mat& inputImg){
//    auto outputTensor = torch::from_blob(inputImg.data, {inputImg.rows, inputImg.cols, inputImg.channels()}).clone();
//    outputTensor = outputTensor.permute({2, 0, 1});
//    return outputTensor;
//}

//torch::Tensor inference(torch::jit::script::Module& model, const std::string& imgpath){
//    cv::Mat img = readAnImage(imgpath);
//    cv::resize(img, img , cv::Size(224, 224));
//    auto input = openCV2Torch(img);
//    std::vector<torch::jit::IValue> inputs;
//    inputs.push_back(input);
//    auto output = model.forward(inputs).toTensor();
//    return output.argmax(1);
//}

//torch::Tensor inference_prob(torch::jit::script::Module& model, const std::string& imgpath){
//    cv::Mat img = readAnImage(imgpath);
//    cv::resize(img, img , cv::Size(224, 224));
//    auto input = openCV2Torch(img);
//    std::vector<torch::jit::IValue> inputs;
//    inputs.push_back(input);
//    auto output = model.forward(inputs).toTensor();
//    return output;
//}

//void MainWindow::predict_image_torch(const QFileInfoList &inputList){
//    torch::Device device(torch::kCPU);
//    auto model = torch::jit::load(ptFilePath);
//    model.to(device);
//    model.eval();
//    for(const QFileInfo &info: inputList){
//        auto pred = inference(model, info.absoluteFilePath().toStdString());
//        add_item(pred.item<int>(), info);
//    }
//}

void MainWindow::predict_image(const QFileInfoList &input){

    using namespace cv;
    double max;
    Point maxLoc;
    neural_net=dnn::readNet(pbFile.toStdString());

    neural_net.setPreferableBackend(dnn::DNN_BACKEND_OPENCV);

    neural_net.setPreferableTarget(dnn::DNN_TARGET_CPU);

    foreach(const QFileInfo &info,input){
        Mat image=imread(info.absoluteFilePath().toStdString());
        Mat inputBlob=dnn::blobFromImage(image, inScaleFactor, Size(width,height), true, false);
        neural_net.setInput(inputBlob);
        matrix=neural_net.forward();
        minMaxLoc(matrix,nullptr,&max,nullptr,&maxLoc);
        int loc=maxLoc.x;
        add_item(loc,info);
    }

}





void MainWindow::on_folder_triggered()
{   //QTextStream stream(&log);
    //log.open(QFile::WriteOnly|QFile::Append);
    //timer.currentSecsSinceEpoch();
    QString default_dir=QDir::homePath();
    QSettings lastdir;
    QString dir1=QFileDialog::getExistingDirectory(this, tr("Chọn thư mục"),lastdir.value(default_dir).toString());


    if(!dir1.isEmpty()){
         QDir dir(dir1);
         lastdir.setValue(default_dir, dir.path());


         QStringList filter;
            filter<< QLatin1String("*.JPG");
            filter<< QLatin1String("*.jpg");
            filter<< QLatin1String("*.jpeg");
            filter<< QLatin1String("*.JPEG");
            dir.setNameFilters(filter);


            infolist=dir.entryInfoList();


            if(!infolist.isEmpty()) {
                int total_files=static_cast<int>(dir.count());
                ui->listWidget->clear();
                workingfolder=infolist.first().absolutePath();
                l.open(workingfolder, total_files);
                //stream<<workingfolder<<endl;
                load_images(workingfolder);

                ui->tv_cao->clear();
                ui->tv_rut->clear();
                ui->tv_giua->clear();
                ui->tv_thap->clear();
                ui->hv_bcl->clear();
                ui->hv_bcn->clear();
                ui->hv_sau->clear();
                ui->hv_truoc->clear();
                ui->tamvi->clear();
                ui->inhvi->clear();
                ui->bcn_gn->clear();
                ui->bcn_pd->clear();
                ui->monvi->clear();
                ui->hang_vi->clear();
                ui->than_vi->clear();
                ui->mon_vi->clear();
                ui->tam_vi->clear();
                ui->bo_cong_nho->clear();
                ui->phinh_vi->clear();
                count = 0;
                ui->so_luong->setText(QString::number(count));
                QRegExp re("\\d*");  // a digit (\d), zero or more times (*)
                if (re.exactMatch(bn)){
                     bn = edit->text();
                     int nbn=bn.toInt();
                     ++nbn;
                     bn = QString::number(nbn);
                     //QString srt=bn+1;
                     if(nbn >= 100){
                         edit->setText(bn);
                     }
                     else {
                         edit->setText("0"+bn);
                     }
                }

            foreach(const QFileInfo &fileinfo,infolist){

                QString shortpath= fileinfo.fileName();
                QString path= fileinfo.absoluteFilePath();
                ui->listWidget->addItem(new QListWidgetItem(QIcon(path), shortpath));//add each item

            }
        }
    }
    ui->listWidget->sortItems(Qt::AscendingOrder);
    setTabName();

}

QImage MainWindow::crop_images(QString each_images){

    QImage image(each_images);
    QRect rect(0,0,1280,960);
    QImage cropped;
    if(image.width() < 1280 || image.height() < 960){

        return image;
    }
    else{
        cropped=image.copy(rect);
        cropped.save(each_images);
        return cropped;
    }
}
void MainWindow::load_images(QString img_prefix){
   QDirIterator ite(img_prefix,QStringList()<<"*.JPG"<<"*.jpg"<<"*.jpeg"<<"*.JPEG",QDir::Files,QDirIterator::NoIteratorFlags);
   while(ite.hasNext()){
       crop_images(ite.next());
   }
}


void MainWindow::loop_each_widget(QListWidget *widget, QString suffix, int plus){
    int numItems = widget->count();
    QString path=workingfolder+"/HVAI" + " BN"+ bn;
    QDir dir;
    if(!dir.exists(path)){
        dir.mkpath(path);
    }
    for(int i = 0; i < numItems; ++i)
    {
        QString a=QString::number(i+plus);          //get the number
        QFileInfo info(widget->item(i)->text());    //get the items' name
        QString fullpath= workingfolder +"/"+ info.filePath();
        widget->item(i)->text().clear();            //clear the old name
        QString txt="HVAI "+ suffix + " BN"+ bn + " 0"+a+".JPG";
        widget->item(i)->setText(txt);              //set the new name
        QFile::copy(fullpath,path+"/HVAI " + suffix + " BN" +bn +" 0"+a+".JPG"); //copy image to the new directory
    }

}





void MainWindow::on_done_clicked()
{
    QMessageBox messageBox(QMessageBox::Question,
                tr("Xác nhận"),
                tr("Bạn có muốn phân loại ảnh không?"),
                QMessageBox::Ok| QMessageBox::Cancel,
                this);
        messageBox.setButtonText(QMessageBox::Ok, tr("Có"));
        messageBox.setButtonText(QMessageBox::Cancel, tr("Không"));
    if(messageBox.exec() == QMessageBox::Ok){
    l.done(count);
    bn=edit->text();



    loop_each_widget(ui->tv_cao,"Than vi",1);
    loop_each_widget(ui->tv_giua,"Than vi",5);
    loop_each_widget(ui->tv_thap,"Than vi",9);
    loop_each_widget(ui->tv_rut,"Bo cong lon",1);
    loop_each_widget(ui->hv_truoc,"Hang vi",1);
    loop_each_widget(ui->hv_sau,"Hang vi",3);
    loop_each_widget(ui->hv_bcn,"Hang vi",5);
    loop_each_widget(ui->hv_bcl,"Hang vi",7);
    loop_each_widget(ui->monvi,"Mon vi",1);
    loop_each_widget(ui->bcn_gn,"Bo cong nho",1);
    loop_each_widget(ui->bcn_pd,"Bo cong nho",3);
    loop_each_widget(ui->tamvi,"Tam vi",1);
    loop_each_widget(ui->inhvi,"Phinh vi",1);

    //future.waitForFinished();

    }

    //t=timer.currentSecsSinceEpoch();

}

void MainWindow::showimage(QString img,QGraphicsView *view,QLabel *name){

    fullpath= workingfolder +"/"+ img;
    QImage image(fullpath);
    image=image.scaled(841,631,Qt::KeepAspectRatio);

    //QGraphicsPixmapItem* item=new QGraphicsPixmapItem(QPixmap::fromImage(image));
    QPixmap pixmap = QPixmap::fromImage(image);
    view->setScene(scene);
    scene->addPixmap(pixmap);
    //view->show();
    name->setText(img);


}

void MainWindow::on_quit_clicked()
{
    QMainWindow::close();
}

void MainWindow::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{

    double_click_item(item,ui->listWidget);
    l.double_clicked_item(item,"main");

}

void MainWindow::setTabName(){
    QString t_all=QString("Folder(%1)").arg(ui->listWidget->count());
    QString t_thanvi=QString("Body(%1)").arg(ui->than_vi->count());
    QString t_hangvi=QString("Antrum(%1)").arg(ui->hang_vi->count());
    QString t_monvi=QString("Pyrolus (%1)").arg(ui->mon_vi->count());
    QString t_tamvi=QString("Cardia(%1)").arg(ui->tam_vi->count());
    QString t_bcn=QString("Lesser Curvature(%1)").arg(ui->bo_cong_nho->count());
    QString t_phinhvi=QString("Fundus(%1)").arg(ui->phinh_vi->count());
    QString t_bcl=QString("Greater Curvature(%1)").arg(ui->bo_cong_lon->count());
    ui->tabWidget_2->setTabText(0,t_all);
    ui->tabWidget_2->setTabText(1,t_thanvi);
    ui->tabWidget_2->setTabText(2,t_hangvi);
    ui->tabWidget_2->setTabText(3,t_monvi);
    ui->tabWidget_2->setTabText(4,t_tamvi);
    ui->tabWidget_2->setTabText(5,t_bcn);
    ui->tabWidget_2->setTabText(6,t_phinhvi);
    ui->tabWidget_2->setTabText(7,t_bcl);
}

//All illnesses widgets double clicked Dialog
void MainWindow::double_click_item(QListWidgetItem *item, QListWidget *widget){
    //QTextStream stream(&log);

    //stream<<"s"<<timer.currentSecsSinceEpoch()<<s1<<"dc/"<<item->text()<<endl;
    dlg =new Dialog;
    dlg->setAttribute(Qt::WA_DeleteOnClose);
    dlg->show();
    showimage(item->text(),dlg->big,dlg->name);
    dlg->copy_widget(widget);
}
void MainWindow::single_click_item(QListWidgetItem *item){

}
void MainWindow::on_tv_cao_itemDoubleClicked(QListWidgetItem *item)
{
    l.double_clicked_item(item,"tvc");
    double_click_item(item,ui->tv_cao);
}

void MainWindow::on_tv_giua_itemDoubleClicked(QListWidgetItem *item)
{
    l.double_clicked_item(item,"tvg");
    double_click_item(item,ui->tv_giua);
}

void MainWindow::on_tv_thap_itemDoubleClicked(QListWidgetItem *item)
{
    l.double_clicked_item(item,"tvt");
    double_click_item(item ,ui->tv_thap);
}

void MainWindow::on_tv_rut_itemDoubleClicked(QListWidgetItem *item)
{

    l.double_clicked_item(item,"bcl");
    double_click_item(item,ui->tv_rut);
}

void MainWindow::on_hv_truoc_itemDoubleClicked(QListWidgetItem *item)
{

    l.double_clicked_item(item,"hvt");
    double_click_item(item,ui->hv_truoc);
}

void MainWindow::on_hv_sau_itemDoubleClicked(QListWidgetItem *item)
{
    l.double_clicked_item(item,"hvs");
    double_click_item(item,ui->hv_sau);

}

void MainWindow::on_hv_bcn_itemDoubleClicked(QListWidgetItem *item)
{
    l.double_clicked_item(item,"hvn");
    double_click_item(item,ui->hv_bcn);

}

void MainWindow::on_hv_bcl_itemDoubleClicked(QListWidgetItem *item)
{
    l.double_clicked_item(item,"hvl");
    double_click_item(item,ui->hv_bcl);
}

void MainWindow::on_monvi_itemDoubleClicked(QListWidgetItem *item)
{

    l.double_clicked_item(item,"mov");
    double_click_item(item,ui->monvi);
}

void MainWindow::on_tamvi_itemDoubleClicked(QListWidgetItem *item)
{
    l.double_clicked_item(item,"tav");
    double_click_item(item,ui->tamvi);
}

void MainWindow::on_bcn_gn_itemDoubleClicked(QListWidgetItem *item)
{
    l.double_clicked_item(item,"bgn");
    double_click_item(item,ui->bcn_gn);
}

void MainWindow::on_bcn_pd_itemDoubleClicked(QListWidgetItem *item)
{

    l.double_clicked_item(item,"bpd");
    double_click_item(item,ui->bcn_pd);
}

void MainWindow::on_inhvi_itemDoubleClicked(QListWidgetItem *item)
{
    l.double_clicked_item(item,"phv");
    double_click_item(item,ui->inhvi);
}

//End of implementing Dialog
void MainWindow::on_than_vi_itemDoubleClicked(QListWidgetItem *item)
{
    l.double_clicked_item(item,"mtv");
    double_click_item(item,ui->than_vi);
}

void MainWindow::on_hang_vi_itemDoubleClicked(QListWidgetItem *item)
{
    l.double_clicked_item(item,"mhv");
    double_click_item(item,ui->hang_vi);
}

void MainWindow::on_mon_vi_itemDoubleClicked(QListWidgetItem *item)
{
    l.double_clicked_item(item,"mmv");
    double_click_item(item,ui->mon_vi);
}

void MainWindow::on_tam_vi_itemDoubleClicked(QListWidgetItem *item)
{
    l.double_clicked_item(item,"mtv");
    double_click_item(item,ui->tam_vi);
}

void MainWindow::on_bo_cong_nho_itemDoubleClicked(QListWidgetItem *item)
{
    l.double_clicked_item(item,"mbc");
    double_click_item(item,ui->bo_cong_nho);
}

void MainWindow::on_phinh_vi_itemDoubleClicked(QListWidgetItem *item)
{
    l.double_clicked_item(item,"mpv");
    double_click_item(item,ui->phinh_vi);
}



//Checkboxes' states

//End of checkboxes' states

void MainWindow::on_actionrun_triggered()
{
    if(!infolist.isEmpty()){
        QFuture<void> future=QtConcurrent::run(this,&MainWindow::predict_image,infolist);
        QFutureWatcher<void> *run=new QFutureWatcher<void>(this);
        connect(run,&QFutureWatcher<void>::finished,this,&MainWindow::setTabName);
        connect(run,&QFutureWatcher<void>::finished,run,&QFutureWatcher<void>::deleteLater);
        run->setFuture(future);       
    }


}


void MainWindow::on_listWidget_itemClicked(QListWidgetItem *item)
{
    l.single_clicked_item(item,"cm");
}

void MainWindow::on_than_vi_itemClicked(QListWidgetItem *item)
{
l.single_clicked_item(item,"thvm");

}

void MainWindow::on_hang_vi_itemClicked(QListWidgetItem *item)
{l.single_clicked_item(item,"havm");

}
void MainWindow::on_mon_vi_itemClicked(QListWidgetItem *item)
{
l.single_clicked_item(item,"movm");

}

void MainWindow::on_tam_vi_itemClicked(QListWidgetItem *item)
{
l.single_clicked_item(item,"tavm");

}

void MainWindow::on_bo_cong_nho_itemClicked(QListWidgetItem *item)
{
l.single_clicked_item(item,"bcnm");

}

void MainWindow::on_phinh_vi_itemClicked(QListWidgetItem *item)
{
l.single_clicked_item(item,"phvm");

}

void MainWindow::on_tv_cao_itemClicked(QListWidgetItem *item)
{
l.single_clicked_item(item,"tvc");

}

void MainWindow::on_tv_giua_itemClicked(QListWidgetItem *item)
{
l.single_clicked_item(item,"tvg");

}

void MainWindow::on_tv_thap_itemClicked(QListWidgetItem *item)
{
l.single_clicked_item(item,"tvt");

}

void MainWindow::on_tv_rut_itemClicked(QListWidgetItem *item)
{
l.single_clicked_item(item,"bcl");

}

void MainWindow::on_inhvi_itemClicked(QListWidgetItem *item)
{
l.single_clicked_item(item,"phv");

}

void MainWindow::on_hv_truoc_itemClicked(QListWidgetItem *item)
{
l.single_clicked_item(item,"hvt");

}

void MainWindow::on_hv_sau_itemClicked(QListWidgetItem *item)
{
l.single_clicked_item(item,"hvs");

}

void MainWindow::on_hv_bcn_itemClicked(QListWidgetItem *item)
{
l.single_clicked_item(item,"hvn");

}

void MainWindow::on_hv_bcl_itemClicked(QListWidgetItem *item)
{
l.single_clicked_item(item,"hvl");

}

void MainWindow::on_monvi_itemClicked(QListWidgetItem *item)
{
l.single_clicked_item(item,"mov");

}

void MainWindow::on_tamvi_itemClicked(QListWidgetItem *item)
{
l.single_clicked_item(item,"tav");

}

void MainWindow::on_bcn_gn_itemClicked(QListWidgetItem *item)
{
l.single_clicked_item(item,"bgn");

}

void MainWindow::on_bcn_pd_itemClicked(QListWidgetItem *item)
{
l.single_clicked_item(item,"bpd");

}



