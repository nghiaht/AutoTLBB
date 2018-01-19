#include "GeneralTab.hpp"
#include "ui_GeneralTab.h"

#include <QDebug>

#include "../games_window/GameWindowInfo.hpp"
#include "../games_window/Player.hpp"

template<>
GeneralTab *SingletonTab<GeneralTab>::s_instance = nullptr;

GeneralTab::GeneralTab(QWidget* /* parent */) :
//  QFrame(parent),
  ui(new Ui::GeneralTab)
{
  ui->setupUi(this);
}

GeneralTab::~GeneralTab()
{
  delete ui;
}

void GeneralTab::onGameWindowInfoPressed(const GameWindowInfo* gWI)
{
  auto player = gWI->getPlayer();
  qDebug() << player->getName();
}
