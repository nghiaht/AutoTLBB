#include "GeneralTab.hpp"
#include "ui_GeneralTab.h"

GeneralTab::GeneralTab(QWidget *parent) :
  QFrame(parent),
  ui(new Ui::GeneralTab)
{
  ui->setupUi(this);
}

GeneralTab::~GeneralTab()
{
  delete ui;
}
