#ifndef TABINTERFACE_HPP
#define TABINTERFACE_HPP

#include <QFrame>

class GameWindowInfo;

class TabAbstract : public QFrame
{
  public:
    explicit TabAbstract(QWidget *parent = 0);

  public:
    virtual void onGameWindowInfoPressed(const GameWindowInfo* gameWindowInfo) = 0;
};

#endif // TABINTERFACE_HPP
