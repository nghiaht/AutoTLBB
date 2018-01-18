#ifndef SKILLTAB_HPP
#define SKILLTAB_HPP

#include "TabAbstract.hpp"

namespace Ui {
  class SkillTab;
}

class SkillTab : public TabAbstract
{
  public:
    Q_OBJECT

  public:
    explicit SkillTab(QWidget *parent = 0);
//    SkillTab();
    ~SkillTab();

  public:
    virtual void onGameWindowInfoPressed(const GameWindowInfo* gameWindowInfo) override;

  private:
    Ui::SkillTab *ui;

  public:
//    friend class SingletonTab<SkillTab>;
};

#endif // SKILLTAB_HPP
