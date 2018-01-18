#ifndef SETTINGS_HPP
#define SETTINGS_HPP

class GameWindowInfo;
class Skill;

class Settings
{
  public:
    Settings(const GameWindowInfo* gWI);

  private:
    const GameWindowInfo *m_gameWindowInfo;
    Skill *m_skill;
};

#endif // SETTINGS_HPP
