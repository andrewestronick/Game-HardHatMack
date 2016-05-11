#ifndef SPRITE_H
#define SPRITE_H

#include <QGraphicsPixmapItem>
#include <string>

class Sprite : public QGraphicsPixmapItem
{

public:

    Sprite(const std::string &resource);
    setVisible(bool visible);

private:

    bool visible = false;
};

#endif // SPRITE_H
