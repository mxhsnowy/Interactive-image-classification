#ifndef QZOOM_H
#define QZOOM_H

#include <QWidget>
#include <QGraphicsView>
#include <QWheelEvent>
#include <QMouseEvent>
#include <QtMath>
class QZoom:public QGraphicsView
{
protected:
    void mouseEvent(QMouseEvent *event);
    void wheelEvent(QWheelEvent *event);

public:
    QZoom(QWidget *parent);
private:
    QPointF scenePos;
};

#endif // QZOOM_H
