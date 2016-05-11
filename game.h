#ifndef GAME_H
#define GAME_H

#include <QObject>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QPixmap>
#include <QBrush>
#include <QTimer>

class Game : public QObject
{

    Q_OBJECT

public:

    Game();
    ~Game();

private:

    QGraphicsScene *scene;
    QGraphicsView *view;
    bool playMode = false;

    void init(void);
    void attactMode(void);
};

#endif // GAME_H
