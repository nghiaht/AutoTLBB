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
  private slots:
    void on_f1CheckBox_toggled(bool checked);
    void on_f2CheckBox_toggled(bool checked);
    void on_f3CheckBox_toggled(bool checked);
    void on_f4CheckBox_toggled(bool checked);
    void on_f5CheckBox_toggled(bool checked);
    void on_f6CheckBox_toggled(bool checked);
    void on_f7CheckBox_toggled(bool checked);
    void on_f8CheckBox_toggled(bool checked);
    void on_f12CheckBox_toggled(bool checked);
    void on_f9CheckBox_toggled(bool checked);
    void on_f10CheckBox_toggled(bool checked);
    void on_f11CheckBox_toggled(bool checked);
};

#endif // SKILLTAB_HPP
