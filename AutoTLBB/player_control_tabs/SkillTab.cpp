#include "SkillTab.hpp"
#include "ui_SkillTab.h"

#include <QDebug>

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
