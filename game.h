#ifndef GAME_H
#define GAME_H

#include <QObject>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QPixmap>
#include <QBrush>
#include <QTimer>

class Game : public QGraphicsView
{
    Q_OBJECT

public:

    Game();

private:
    QGraphicsScene *scene;
};

#endif // GAME_H
