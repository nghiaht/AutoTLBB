#ifndef SKILLTAB_HPP
#define SKILLTAB_HPP

#include <QFrame>

namespace Ui {
  class SkillTab;
}

class SkillTab : public QFrame
{
  public:
    Q_OBJECT

  public:
    explicit SkillTab(QWidget *parent = 0);
//    SkillTab();
    ~SkillTab();

  private:
    Ui::SkillTab *ui;

  public:
//    friend class SingletonTab<SkillTab>;
};

#endif // SKILLTAB_HPP
