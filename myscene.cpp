#include "myscene.h"

MyScene::MyScene(QObject *parent) : QGraphicsScene(parent)
{
    QPointF topLeft(0, 0);
    bounding.setTopLeft(topLeft);
    QPointF bottomRight(0, 0);
    bounding.setBottomRight(bottomRight);
}


MyScene::~MyScene()
{
}

void MyScene::setBrush(bool checkBoxBrush, bool checkBoxClean)
{
    this->checkBoxBrush = checkBoxBrush;
    if (checkBoxBrush) {
        if (checkBoxClean) {
            cleanMode = true;
            brushMode = false;
        }
        else {
            cleanMode = false;
            brushMode = true;
        }
    }
    else {
        cleanMode = false;
        brushMode = false;
    }

}
void MyScene::setBrushSize(int brushSize)
{
    this->brushSize = brushSize;
}

void MyScene::setBounding(QPointF topLeft, QPointF bottomRight)
{

    QPointF tmp(1*brushSize, 1*brushSize);
    bounding.setTopLeft(topLeft+tmp);
    bounding.setBottomRight(bottomRight-tmp);
}
void MyScene::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    if (brushMode && bounding.contains(event->scenePos())) {
        if (event->button() == Qt::LeftButton) {
            brushing = true;
            // Save the coordinates of the point of pressing
            previousPoint = event->scenePos();
        }
        else if(event->button() == Qt::RightButton){
            brushing = true;
            brushBackground = true;
        }


    }
    else if (cleanMode && event->button() != Qt::MiddleButton) {
        cleaning = true;
        QGraphicsItem *itemToRemove = 0;
        foreach(QGraphicsItem *item, this->items()) {
            QPointF itemPos;
            itemPos.setX(item->boundingRect().x());
            itemPos.setY(item->boundingRect().y());
            if ((abs(event->scenePos().x() - itemPos.x()) < brushSize*1.5)
                && (abs(event->scenePos().y() - itemPos.y()) < brushSize*1.5)
                && (item->type() == QGraphicsLineItem::Type
                    || item->type() == QGraphicsEllipseItem::Type)) {
                itemToRemove = item;
                break;
            }
        }
        if (itemToRemove != 0)
            removeItem(itemToRemove);
    }
    else {
        event->ignore();

        QGraphicsScene::mousePressEvent(event);
    }


}

void MyScene::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    //if (brushMode && brushing && bounding.contains(event->scenePos())) {
    if (brushMode && brushing && this->sceneRect().contains(event->scenePos())) {
        if (!brushBackground) {
            // We draw the line with the previous coordinates
            addLine(previousPoint.x(),
                previousPoint.y(),
                event->scenePos().x(),
                event->scenePos().y(),
                QPen(Qt::blue, brushSize, Qt::SolidLine, Qt::RoundCap));
            // Update on the previous coordinate data
            previousPoint = event->scenePos();
        }
        else {
            addEllipse(event->scenePos().x()- brushSize/2.0,
                event->scenePos().y()- brushSize/2.0,
                brushSize,
                brushSize,
                QPen(Qt::NoPen),
                QBrush(Qt::blue));
        }

    }
    else if (cleanMode && cleaning) {

        QGraphicsItem *itemToRemove = 0;
        foreach(QGraphicsItem *item, this->items()) {
            QPointF itemPos;
            itemPos.setX(item->boundingRect().x());
            itemPos.setY(item->boundingRect().y());
            if ( (abs(event->scenePos().x()- itemPos.x()) < brushSize*1.5)
                && (abs(event->scenePos().y() - itemPos.y()) < brushSize*1.5)
                && (item->type() == QGraphicsLineItem::Type
                    || item->type() == QGraphicsEllipseItem::Type)) {
                itemToRemove = item;
                break;
            }
        }
        if (itemToRemove != 0)
            removeItem(itemToRemove);
    }
    else {
        event->ignore();
        QGraphicsScene::mouseMoveEvent(event);
    }

}
void MyScene::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    if (brushing || cleaning) {
        cleaning = false;
        brushing = false;
        brushBackground = false;
    }
    else {
        event->ignore();
        QGraphicsScene::mouseReleaseEvent(event);
    }

}
