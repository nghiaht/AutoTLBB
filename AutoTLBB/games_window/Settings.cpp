#include "Settings.hpp"

#include "GameWindowInfo.hpp"

#include "settings/Skill.hpp"
#include "settings/General.hpp"
#include "settings/Item.hpp"

Settings::Settings(const GameWindowInfo* gWI)
{
  m_gameWindowInfo = gWI;
  m_skill = new Skill();
  m_general = new General();
  m_item = new Item();
}
