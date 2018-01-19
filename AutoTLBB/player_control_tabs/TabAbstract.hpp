#ifndef TABINTERFACE_HPP
#define TABINTERFACE_HPP

#include <QFrame>

#include "../Preprocessor.hpp"

class GameWindowInfo;

class TabAbstract : public QFrame
{
  public:
    explicit TabAbstract(QWidget *parent = 0);

  public:
    virtual void onGameWindowInfoPressed(const GameWindowInfo* /* gameWindowInfo */) = 0;

  protected:
    APP_SYNTHESIZE_PTR(GameWindowInfo, m_currentGameWindowInfo, CurrentGameWindowInfo)
};

#endif // TABINTERFACE_HPP
