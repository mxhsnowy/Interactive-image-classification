#include "logger.h"

logger::logger()
{
log.open(QFile::WriteOnly|QFile::Append);
}
logger::~logger(){
    log.close();
}
void logger::date_time_log(){
    QTextStream stream(&log);
    stream<<timer.currentDateTime().toString()<<endl;
}
void logger::open(QString path, int number){
    QTextStream stream(&log);

    stream<<"s"<<timer.currentSecsSinceEpoch()<<":open-"<<path<<endl;
    stream<<number<<" images"<<endl;
}
void logger::openDrawer(QListWidgetItem *item){
    QTextStream stream(&log);
    stream<<"s"<<timer.currentSecsSinceEpoch()<<":drawer-"<<item->text()<<endl;
}
void logger::done(int number){
    QTextStream stream(&log);
    stream<<"s"<<timer.currentSecsSinceEpoch()<<":done-"<<number<<" images"<<endl;
    stream<<"-----------------------"<<endl;

}
void logger::exit(){
    QTextStream stream(&log);
    stream<<"s"<<timer.currentSecsSinceEpoch()<<":exit"<<endl;
}
void logger::act_logger(int part){

    QTextStream stream(&log);
    switch (part) {
    case 1:
     stream<<"s"<<timer.currentSecsSinceEpoch()<<":i-tvc"<<endl;
     break;
    case 2:
      stream<<"s"<<timer.currentSecsSinceEpoch()<<":i-tvg"<<endl;
        break;

    case 3:
        stream<<"s"<<timer.currentSecsSinceEpoch()<<":i-tvt"<<endl;
        break;
 case 4:
        stream<<"s"<<timer.currentSecsSinceEpoch()<<":i-bcl"<<endl;
        break;
 case 5:
        stream<<"s"<<timer.currentSecsSinceEpoch()<<":i-hvt"<<endl;
        break;
 case 6:
        stream<<"s"<<timer.currentSecsSinceEpoch()<<":i-hvs"<<endl;
        break;
 case 7:
        stream<<"s"<<timer.currentSecsSinceEpoch()<<":i-hvn"<<endl;
        break;
 case 8:
        stream<<"s"<<timer.currentSecsSinceEpoch()<<":i-hvl"<<endl;
        break;
 case 9:
        stream<<"s"<<timer.currentSecsSinceEpoch()<<":i-onv"<<endl;
        break;
 case 10:
        stream<<"s"<<timer.currentSecsSinceEpoch()<<":i-tav"<<endl;
        break;
 case 11:
        stream<<"s"<<timer.currentSecsSinceEpoch()<<":i-bcn"<<endl;
        break;
 case 12:
        stream<<"s"<<timer.currentSecsSinceEpoch()<<":i-bcd"<<endl;
        break;
 case 13:
        stream<<"s"<<timer.currentSecsSinceEpoch()<<":i-phv"<<endl;
        break;
 case 14:
        stream<<"s"<<timer.currentSecsSinceEpoch()<<":i-be1"<<endl;
        break;
 case 15:
        stream<<"s"<<timer.currentSecsSinceEpoch()<<":i-be2"<<endl;
        break;
 case 16:
        stream<<"s"<<timer.currentSecsSinceEpoch()<<":i-be3"<<endl;
        break;
    case 17:
        stream<<"s"<<timer.currentSecsSinceEpoch()<<":i-mlwt"<<endl;
        break;
    case 18:
        stream<<"s"<<timer.currentSecsSinceEpoch()<<":i-mthv"<<endl;
        break;
    case 19:
        stream<<"s"<<timer.currentSecsSinceEpoch()<<":i-mhav"<<endl;
        break;
    case 20:
        stream<<"s"<<timer.currentSecsSinceEpoch()<<":i-mtav"<<endl;
        break;
    case 21:
        stream<<"s"<<timer.currentSecsSinceEpoch()<<":i-monv"<<endl;
        break;
    case 22:
        stream<<"s"<<timer.currentSecsSinceEpoch()<<":i-mbcn"<<endl;
        break;
    case 23:
        stream<<"s"<<timer.currentSecsSinceEpoch()<<":i-mphv"<<endl;
    }

}
void logger::act_out_logger(int part){
    QTextStream stream(&log);
    switch (part) {
    case 1:
     stream<<"s"<<timer.currentSecsSinceEpoch()<<":o-tvc"<<endl;
     break;
    case 2:
        stream<<"s"<<timer.currentSecsSinceEpoch()<<":o-tvg"<<endl;
        break;
    case 3:
        stream<<"s"<<timer.currentSecsSinceEpoch()<<":o-tvt"<<endl;
        break;
 case 4:
        stream<<"s"<<timer.currentSecsSinceEpoch()<<":o-bcl"<<endl;
        break;
 case 5:
        stream<<"s"<<timer.currentSecsSinceEpoch()<<":o-hvt"<<endl;
        break;
 case 6:
        stream<<"s"<<timer.currentSecsSinceEpoch()<<":o-hvs"<<endl;
        break;
 case 7:
        stream<<"s"<<timer.currentSecsSinceEpoch()<<":o-hvn"<<endl;
        break;
 case 8:
        stream<<"s"<<timer.currentSecsSinceEpoch()<<":o-hvl"<<endl;
        break;
 case 9:
        stream<<"s"<<timer.currentSecsSinceEpoch()<<":o-onv"<<endl;
        break;
 case 10:
        stream<<"s"<<timer.currentSecsSinceEpoch()<<":o-tav"<<endl;
        break;
    case 11:
        stream<<"s"<<timer.currentSecsSinceEpoch()<<":o-bcn"<<endl;
        break;
    case 12:
        stream<<"s"<<timer.currentSecsSinceEpoch()<<":o-bcd"<<endl;
        break;
    case 13:
        stream<<"s"<<timer.currentSecsSinceEpoch()<<":o-phv"<<endl;
        break;
    case 14:
        stream<<"s"<<timer.currentSecsSinceEpoch()<<":o-be1"<<endl;
        break;
    case 15:
        stream<<"s"<<timer.currentSecsSinceEpoch()<<":o-be2"<<endl;
        break;
    case 16:
        stream<<"s"<<timer.currentSecsSinceEpoch()<<":o-be3"<<endl;
        break;
    case 17:
        stream<<"s"<<timer.currentSecsSinceEpoch()<<":o-mlwt"<<endl;
        break;
    case 18:
        stream<<"s"<<timer.currentSecsSinceEpoch()<<":o-mthv"<<endl;
        break;
    case 19:
        stream<<"s"<<timer.currentSecsSinceEpoch()<<":o-mhav"<<endl;
        break;
    case 20:
        stream<<"s"<<timer.currentSecsSinceEpoch()<<":o-mtav"<<endl;
        break;
    case 21:
        stream<<"s"<<timer.currentSecsSinceEpoch()<<":o-monv"<<endl;
        break;
    case 22:
        stream<<"s"<<timer.currentSecsSinceEpoch()<<":o-mbcn"<<endl;
        break;
    case 23:
        stream<<"s"<<timer.currentSecsSinceEpoch()<<":o-mphv"<<endl;
    }


}
void logger::single_clicked_item(QListWidgetItem *item, QString part_code){
    QTextStream stream(&log);
    stream<<"s"<<timer.currentSecsSinceEpoch()<<":sc"<<"-"<<part_code<<"-"<<item->text()<<endl;
}
void logger::double_clicked_item(QListWidgetItem *item, QString part_code){
    QTextStream stream(&log);
    stream<<"s"<<timer.currentSecsSinceEpoch()<<":dc"<<"-"<<part_code<<"-"<<item->text()<<endl;
}
void logger::brightness(int value){
    QTextStream stream(&log);
    stream<<"s"<<timer.currentSecsSinceEpoch()<<":brn-"<<value<<endl;
}
void logger::contrast(int value){
    QTextStream stream(&log);
    stream<<"s"<<timer.currentSecsSinceEpoch()<<":ctr-"<<value<<endl;

}
void logger::forward(QListWidgetItem *item){
    QTextStream stream(&log);
    stream<<"s"<<timer.currentSecsSinceEpoch()<<":fwd-"<<item->text()<<endl;
}
void logger::backward(QListWidgetItem *item){

    QTextStream stream(&log);
    stream<<"s"<<timer.currentSecsSinceEpoch()<<":bwd-"<<item->text()<<endl;
}
