#include "game.h"

Game::Game()
{
    scene = new QGraphicsScene(this);
    this->setScene(scene);
    this->setSceneRect(0 ,0 ,800 ,600 );
    this->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    this->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    this->setBackgroundBrush(QBrush(QPixmap(":/Graphics/Media/Images/HHM-playfield800x640.png")));
    this->show();
}
