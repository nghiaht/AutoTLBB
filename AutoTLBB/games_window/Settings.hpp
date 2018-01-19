#ifndef SETTINGS_HPP
#define SETTINGS_HPP

#include "../Preprocessor.hpp"

class GameWindowInfo;

class Skill;
class General;
class Item;

class Settings
{
  public:
    Settings(const GameWindowInfo* gWI);
    ~Settings();

  private:
    const GameWindowInfo *m_gameWindowInfo;
    APP_SYNTHESIZE_PTR(Skill, m_skill, Skill)
    APP_SYNTHESIZE_PTR(General, m_general, General)
    APP_SYNTHESIZE_PTR(Item, m_item, Item)
};

#endif // SETTINGS_HPP
