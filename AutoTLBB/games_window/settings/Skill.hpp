#ifndef SKILL_HPP
#define SKILL_HPP

#include "../../Preprocessor.hpp"

class Skill
{
  public:
    Skill();

  private:
    APP_SYNTHESIZE_BOOL(m_f1, F1)
    APP_SYNTHESIZE_BOOL(m_f2, F2)
    APP_SYNTHESIZE_BOOL(m_f3, F3)
    APP_SYNTHESIZE_BOOL(m_f4, F4)
    APP_SYNTHESIZE_BOOL(m_f5, F5)
    APP_SYNTHESIZE_BOOL(m_f6, F6)
    APP_SYNTHESIZE_BOOL(m_f7, F7)
    APP_SYNTHESIZE_BOOL(m_f8, F8)
    APP_SYNTHESIZE_BOOL(m_f9, F9)
    APP_SYNTHESIZE_BOOL(m_f10, F10)
    APP_SYNTHESIZE_BOOL(m_f11, F11)
    APP_SYNTHESIZE_BOOL(m_f12, F12)
};

#endif // SKILL_HPP
