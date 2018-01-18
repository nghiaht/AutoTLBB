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

  private:
    static SkillTab *m_pInstance;

  public:
    static SkillTab* getInstance();

  public:
    explicit SkillTab(QWidget *parent = 0);
    ~SkillTab();

  private:
    Ui::SkillTab *ui;
};

#endif // SKILLTAB_HPP
