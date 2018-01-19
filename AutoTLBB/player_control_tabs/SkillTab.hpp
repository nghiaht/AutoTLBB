#ifndef SKILLTAB_HPP
#define SKILLTAB_HPP

#include "SingletonTab.hpp"

namespace Ui {
  class SkillTab;
}

class SkillTab : public SingletonTab<SkillTab>
{
  public:
    Q_OBJECT

  protected:
    explicit SkillTab(QWidget *parent = 0);
//    SkillTab();
    ~SkillTab();

  public:
    virtual void onGameWindowInfoPressed(const GameWindowInfo* /* gameWindowInfo */) override;

  private:
    Ui::SkillTab *ui;

  public:
    friend class SingletonTab<SkillTab>;
};

#endif // SKILLTAB_HPP
