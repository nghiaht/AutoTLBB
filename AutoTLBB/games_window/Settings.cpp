#include "Settings.hpp"

#include "GameWindowInfo.hpp"

#include "settings/Skill.hpp"

Settings::Settings(const GameWindowInfo* gWI)
{
  m_gameWindowInfo = gWI;
  m_skill = new Skill();
}
