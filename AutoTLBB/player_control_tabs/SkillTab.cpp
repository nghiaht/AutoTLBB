#include "SkillTab.hpp"
#include "ui_SkillTab.h"

#include <QDebug>

#include "games_window/GameWindowInfo.hpp"
#include "games_window/Settings.hpp"
#include "games_window/settings/Skill.hpp"

template<>
SkillTab *SingletonTab<SkillTab>::s_instance = nullptr;

SkillTab::SkillTab(QWidget* /* parent */) :
//  TabAbstract(parent),
  ui(new Ui::SkillTab)
{
  ui->setupUi(this);
}

SkillTab::~SkillTab()
{
  delete ui;
}

void SkillTab::onGameWindowInfoPressed(const GameWindowInfo* gWI)
{
  auto skillSettings = gWI->getSettings()->getSkill();

  ::Sleep(2000);
  gWI->postMessage(WM_KEYUP, 0x73, 0x3E0001);
  gWI->postMessage(WM_KEYUP, 0x73, 0x3E0001);
  gWI->postMessage(WM_KEYDOWN, 0x73, 0x3E0001);
  gWI->postMessage(WM_KEYDOWN, 0x73, 0x3E0001);
  gWI->postMessage(WM_KEYDOWN, 0x73, 0x3E0001);

  ui->f1CheckBox->setChecked(skillSettings->getF1());
  ui->f2CheckBox->setChecked(skillSettings->getF2());
  ui->f3CheckBox->setChecked(skillSettings->getF3());
  ui->f4CheckBox->setChecked(skillSettings->getF4());
  ui->f5CheckBox->setChecked(skillSettings->getF5());
  ui->f6CheckBox->setChecked(skillSettings->getF6());
  ui->f7CheckBox->setChecked(skillSettings->getF7());
  ui->f8CheckBox->setChecked(skillSettings->getF8());
  ui->f9CheckBox->setChecked(skillSettings->getF9());
  ui->f10CheckBox->setChecked(skillSettings->getF10());
  ui->f11CheckBox->setChecked(skillSettings->getF11());
  ui->f12CheckBox->setChecked(skillSettings->getF12());
}

void SkillTab::on_f1CheckBox_toggled(bool checked)
{
  this->getCurrentGameWindowInfo()->getSettings()->getSkill()->setF1(checked);
}

void SkillTab::on_f2CheckBox_toggled(bool checked)
{
  this->getCurrentGameWindowInfo()->getSettings()->getSkill()->setF2(checked);
}

void SkillTab::on_f3CheckBox_toggled(bool checked)
{
  this->getCurrentGameWindowInfo()->getSettings()->getSkill()->setF3(checked);
}

void SkillTab::on_f4CheckBox_toggled(bool checked)
{
  this->getCurrentGameWindowInfo()->getSettings()->getSkill()->setF4(checked);
}

void SkillTab::on_f5CheckBox_toggled(bool checked)
{
  this->getCurrentGameWindowInfo()->getSettings()->getSkill()->setF5(checked);
}

void SkillTab::on_f6CheckBox_toggled(bool checked)
{
  this->getCurrentGameWindowInfo()->getSettings()->getSkill()->setF6(checked);
}

void SkillTab::on_f7CheckBox_toggled(bool checked)
{
  this->getCurrentGameWindowInfo()->getSettings()->getSkill()->setF7(checked);
}

void SkillTab::on_f8CheckBox_toggled(bool checked)
{
  this->getCurrentGameWindowInfo()->getSettings()->getSkill()->setF8(checked);
}

void SkillTab::on_f12CheckBox_toggled(bool checked)
{
  this->getCurrentGameWindowInfo()->getSettings()->getSkill()->setF12(checked);
}

void SkillTab::on_f9CheckBox_toggled(bool checked)
{
  this->getCurrentGameWindowInfo()->getSettings()->getSkill()->setF9(checked);
}

void SkillTab::on_f10CheckBox_toggled(bool checked)
{
  this->getCurrentGameWindowInfo()->getSettings()->getSkill()->setF10(checked);
}

void SkillTab::on_f11CheckBox_toggled(bool checked)
{
  this->getCurrentGameWindowInfo()->getSettings()->getSkill()->setF11(checked);
}
