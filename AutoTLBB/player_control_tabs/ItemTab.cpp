#include "ItemTab.hpp"
#include "ui_ItemTab.h"

template<>
ItemTab *SingletonTab<ItemTab>::s_instance = nullptr;

ItemTab::ItemTab(QWidget *parent) :
//  QFrame(parent),
  ui(new Ui::ItemTab)
{
  ui->setupUi(this);
}

ItemTab::~ItemTab()
{
  delete ui;
}

void ItemTab::onGameWindowInfoPressed(const GameWindowInfo* gWI)
{

}
