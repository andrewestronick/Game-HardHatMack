#ifndef GAME_H
#define GAME_H

#include <QObject>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QPixmap>
#include <QBrush>
#include <QTimer>
#include <QString>

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
    void setBackground(const QString &image);
};

#endif // GAME_H
