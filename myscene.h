#ifndef MYSCENE_H
#define MYSCENE_H


#include<QGraphicsScene>
#include<QGraphicsSceneEvent>
#include<QPixmap>
#include<QPaintEvent>
#include<QPainter>
#include<QGraphicsItemGroup>

class MyScene :
    public QGraphicsScene
{
    Q_OBJECT
public:
    explicit MyScene(QObject *parent= Q_NULLPTR);
    ~MyScene();
    //ÉèÖÃ±ÊË¢
    void setBrush(bool checkBoxBrush, bool checkBoxClean);
    void setBrushSize(int brushSize);
    void setBounding(QPointF topLeft, QPointF bottomRight);
protected:
    void mousePressEvent(QGraphicsSceneMouseEvent * event);
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
private:
    QRectF bounding;
    QPointF previousPoint;
    int brushSize = 5;
    //»æÍ¼¿ØÖÆ±äÁ¿
    bool checkBoxBrush = false;
    bool brushMode = false;
    bool cleanMode = false;
    bool brushing = false;
    bool cleaning = false;
    bool brushBackground = false;
};

#endif // MYSCENE_H
