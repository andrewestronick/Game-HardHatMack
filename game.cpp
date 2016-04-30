#include "game.h"

Game::Game()
{
    scene = new QGraphicsScene(QRectF(0, 0, 800, 640), this);
    this->setScene(scene);
    this->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    this->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    this->setBackgroundBrush(QBrush(QPixmap(":/Graphics/Media/Graphics/HHM-playfield800x640.png")));
    this->fitInView(0, 0, 800, 640, Qt::IgnoreAspectRatio);
    this->centerOn(0,0);
    this->setResizeAnchor(QGraphicsView::AnchorViewCenter);
    this->show();
}
