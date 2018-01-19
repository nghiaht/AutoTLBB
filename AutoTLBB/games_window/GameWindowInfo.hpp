#ifndef GAMEWINDOWINFO_HPP
#define GAMEWINDOWINFO_HPP

#include <QDebug>

#include <Windows.h>
#include "../Preprocessor.hpp"
#include "../player_control_tabs/GeneralTab.hpp"

class Player;
class Settings;

class GameWindowInfo
{
  public:
    GameWindowInfo();
    ~GameWindowInfo();

  public:
    void sendMessage(const UINT msg, const WPARAM wParam, const LPARAM lParam) const;
    void postMessage(const UINT msg, const WPARAM wParam, const LPARAM lParam) const;
    void setWindowName(const QString& name);

  public:
    template<typename T>
    T readMemory(const DWORD address) const
    {
      T value;

      auto r = ::ReadProcessMemory(
            this->m_handle,
            reinterpret_cast<LPCVOID>(address),
            reinterpret_cast<LPVOID>(&value),
            sizeof(T), nullptr
            );
      if (r)
      {
      }
      else
      {
        qDebug() << "Can not read memory";
      }

      return value;
    }

    template<typename T>
    T readMemory(const std::vector<DWORD>& adrs) const
    {
      DWORD nextOffset = *adrs.cbegin();
      for (std::size_t i = 1; i < adrs.size(); i++)
      {
        nextOffset = this->readMemory<DWORD>(nextOffset) + adrs.at(i);
      }

      return this->readMemory<T>(nextOffset);
    }

    template<typename T, typename Adr, typename... Adrs>
    T readMemory(char f, const Adr first_adr, const Adrs... adrs) const
    {
      const auto adrsArr = {adrs...};

      int i = 0;
//      Adr nextOffset = adrsArr[i];
      for (const auto adr : adrsArr)
      {
        i++;
        qDebug() << adr;
      }

      T value;

      return value;
    }

  private:
    APP_SYNTHESIZE(HWND, m_hwnd, Hwnd)
    APP_SYNTHESIZE(HANDLE, m_handle, Handle)
    APP_SYNTHESIZE(DWORD, m_processId, ProcessId)
    APP_SYNTHESIZE_PTR(Player, m_player, Player)
    APP_SYNTHESIZE_PTR(Settings, m_settings, Settings)

  private:
    friend QDebug operator<<(QDebug qdb, const GameWindowInfo& gameWindowInfo);
};

#endif // GAMEWINDOWINFO_HPP
