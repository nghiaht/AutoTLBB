#ifndef GENERALTAB_HPP
#define GENERALTAB_HPP

#include "SingletonTab.hpp"

namespace Ui {
  class GeneralTab;
}

class GeneralTab : public SingletonTab<GeneralTab>
{
    Q_OBJECT

  protected:
    explicit GeneralTab(QWidget *parent = 0);
    ~GeneralTab();

  public:
    virtual void onGameWindowInfoPressed(const GameWindowInfo* gWI) override;

  private:
    Ui::GeneralTab *ui;

  private:
    friend class SingletonTab<GeneralTab>;
};

#endif // GENERALTAB_HPP
