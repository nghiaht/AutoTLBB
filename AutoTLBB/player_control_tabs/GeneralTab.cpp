#include "GeneralTab.hpp"
#include "ui_GeneralTab.h"

#include <QDebug>

#include "../games_window/GameWindowInfo.hpp"
#include "../games_window/Player.hpp"
#include "../games_window/Settings.hpp"
#include "../games_window/settings/General.hpp"

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
  auto generalSettings = gWI->getSettings()->getGeneral();

  ui->enableAutoCheckBox->setChecked(generalSettings->getEnable());
}

void GeneralTab::on_enableAutoCheckBox_toggled(bool checked)
{
  this->getCurrentGameWindowInfo()->getSettings()->getGeneral()->setEnable(checked);
}
