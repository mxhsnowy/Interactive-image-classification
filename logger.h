#ifndef LOGGER_H
#define LOGGER_H
#include <QListWidget>
#include <QDateTime>
#include <QFile>
#include <QTextStream>
class logger
{
public :
    logger();
    ~logger();
    void open(QString path, int number);
    void done(int number);
    void exit();
    void openDrawer(QListWidgetItem *item);
    void saveDrawer();
    void forward(QListWidgetItem *item);
    void backward(QListWidgetItem *item);
    void dropAction(QMimeData *drop);
    void brightness(int value);
    void contrast(int value);

    void act_logger(int part);
    void act_out_logger(int part);

    void single_clicked_item(QListWidgetItem* item,QString part_code);
    void double_clicked_item(QListWidgetItem* item,QString part_code);
    void date_time_log();
private:
    QDateTime timer;
    QFile log=QFile("research.log");
};

#endif // LOGGER_H
