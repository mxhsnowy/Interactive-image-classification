#include "qzoom.h"

QZoom::QZoom(QWidget *parent):QGraphicsView(parent)
{

}
void QZoom::wheelEvent(QWheelEvent *event){
    if(event->orientation() == Qt::Vertical){
        double angleDeltaY=event->angleDelta().y();
        double zoomFactor= qPow(1.0015,angleDeltaY);
        scale(zoomFactor,zoomFactor);
        if(angleDeltaY>0){
            this->centerOn(scenePos);
            scenePos=this->mapToScene(event->pos());

        }
        this->viewport()->update();
        event->accept();
    }
    else {
        event->ignore();
    }
}
void QZoom::mouseEvent(QMouseEvent *event){
    scenePos=this->mapToScene(event->pos());

}
