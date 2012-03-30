#include "lcadviewer.h"

#include <QtGui>
#include <QGLWidget>

LCADViewer::LCADViewer(QWidget* parent) :
    QGraphicsView(parent) {

    parent->setAttribute(Qt::WA_NoSystemBackground);
    setAttribute(Qt::WA_NoSystemBackground);
    QGLFormat fmt;
    fmt.setSampleBuffers(true);
    setViewport(new QGLWidget(fmt));

    QGraphicsScene* scene = new QGraphicsScene(this);
    scene->setItemIndexMethod(QGraphicsScene::BspTreeIndex);
    scene->setSceneRect(-200, -200, 400, 400);
    setScene(scene);
    setCacheMode(CacheBackground);
    setViewportUpdateMode(BoundingRectViewportUpdate);
    // setRenderHint(QPainter::Antialiasing);
    setTransformationAnchor(AnchorUnderMouse);
    scale(qreal(0.8), qreal(0.8));
    setMinimumSize(400, 400);
    setWindowTitle(tr("Elastic Nodes"));
}

void LCADViewer::setAbstractDocument(lc::AbstractDocument* document) {
    _document = document;
}


void LCADViewer::drawBackground(QPainter* painter, const QRectF& rect) {
    Q_UNUSED(rect);
    return;
    // Shadow
    QRectF sceneRect = this->sceneRect();
    QRectF rightShadow(sceneRect.right(), sceneRect.top() + 5, 5, sceneRect.height());
    QRectF bottomShadow(sceneRect.left() + 5, sceneRect.bottom(), sceneRect.width(), 5);

    if (rightShadow.intersects(rect) || rightShadow.contains(rect)) {
        painter->fillRect(rightShadow, Qt::darkGray);
    }

    if (bottomShadow.intersects(rect) || bottomShadow.contains(rect)) {
        painter->fillRect(bottomShadow, Qt::darkGray);
    }

    // Fill
    QLinearGradient gradient(sceneRect.topLeft(), sceneRect.bottomRight());
    gradient.setColorAt(0, Qt::white);
    gradient.setColorAt(1, Qt::lightGray);
    painter->fillRect(rect.intersect(sceneRect), gradient);
    painter->setBrush(Qt::NoBrush);
    painter->drawRect(sceneRect);

    // Text
    QRectF textRect(sceneRect.left() + 4, sceneRect.top() + 4,
                    sceneRect.width() - 4, sceneRect.height() - 4);
    QString message(tr("This is a simple test for a CAD viewer."));

    QFont font = painter->font();
    font.setBold(true);
    font.setPointSize(14);
    painter->setFont(font);
    painter->setPen(Qt::lightGray);
    painter->drawText(textRect.translated(2, 2), message);
    painter->setPen(Qt::black);
    painter->drawText(textRect, message);
}


void LCADViewer::scaleView(qreal scaleFactor) {
    qreal factor = transform().scale(scaleFactor, scaleFactor).mapRect(QRectF(0, 0, 1, 1)).width();

    if (factor < 0.1 || factor > 10) {
        return;
    }

    scale(scaleFactor, scaleFactor);
}
