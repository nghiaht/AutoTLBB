#include "GeneralTab.hpp"
#include "ui_GeneralTab.h"

GeneralTab::GeneralTab(QWidget *parent) :
  QFrame(parent),
  ui(new Ui::GeneralTab)
{
  ui->setupUi(this);

  m_a = 'b';
}

GeneralTab::~GeneralTab()
{
  delete ui;
}
