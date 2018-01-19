#ifndef ITEMTAB_HPP
#define ITEMTAB_HPP

#include "SingletonTab.hpp"

namespace Ui {
  class ItemTab;
}

class ItemTab : public SingletonTab<ItemTab>
{
    Q_OBJECT

  protected:
    explicit ItemTab(QWidget *parent = 0);
    ~ItemTab();

  public:
    virtual void onGameWindowInfoPressed(const GameWindowInfo* gWI) override;

  private:
    Ui::ItemTab *ui;

  private:
    friend class SingletonTab<ItemTab>;
};

#endif // ITEMTAB_HPP
