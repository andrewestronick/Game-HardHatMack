#include "game.h"

Game::Game()
{
    init();
    attactMode();
}


Game::~Game()
{
    delete view;
    delete scene;
}


void Game::init()
{
    scene = new QGraphicsScene(QRectF(0, 0, 800, 640), this);
    view = new QGraphicsView(scene);
    view->setScene(scene);
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    // view->setBackgroundBrush(QBrush(QPixmap(":/Graphics/Media/Graphics/HHM-playfield800x640.png")));
    view->setAlignment(Qt::AlignLeft | Qt::AlignTop);
    view->setFixedSize(800, 640);
    view->show();
}


void Game::attactMode()
{
    view->setBackgroundBrush(QBrush(QPixmap(":/Graphics/Media/Graphics/HHM-playfield800x640.png")));
}
