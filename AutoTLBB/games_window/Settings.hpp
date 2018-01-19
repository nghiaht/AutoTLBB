#ifndef SETTINGS_HPP
#define SETTINGS_HPP

#include "../Preprocessor.hpp"

class GameWindowInfo;

class Skill;

class Settings
{
  public:
    Settings(const GameWindowInfo* gWI);

  private:
    const GameWindowInfo *m_gameWindowInfo;
    APP_SYNTHESIZE_PTR(Skill, m_skill, Skill)
};

#endif // SETTINGS_HPP
