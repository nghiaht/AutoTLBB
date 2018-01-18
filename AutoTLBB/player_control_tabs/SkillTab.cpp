#include "SkillTab.hpp"
#include "ui_SkillTab.h"

SkillTab::SkillTab(QWidget *parent) :
  QFrame(parent),
  ui(new Ui::SkillTab)
{
  ui->setupUi(this);
}

SkillTab::~SkillTab()
{
  delete ui;
}
/*
SkillTab* SkillTab::getInstance()
{
  if (SkillTab::m_pInstance == nullptr)
  {
    SkillTab::m_pInstance = new SkillTab(nullptr);
  }

  return SkillTab::m_pInstance;
}
*/
