#ifndef GENERALTAB_HPP
#define GENERALTAB_HPP

#include <QFrame>

namespace Ui {
  class GeneralTab;
}

class GeneralTab : public QFrame
{
    Q_OBJECT

  public:
    explicit GeneralTab(QWidget *parent = 0);
    ~GeneralTab();

  public:
    char getTest() const{return m_a;};
    char m_a = 'C';

  private:
    Ui::GeneralTab *ui;
};

#endif // GENERALTAB_HPP
