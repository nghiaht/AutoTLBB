#ifndef SINGLETON_HPP
#define SINGLETON_HPP

#include "TabAbstract.hpp"

template<typename T>
class SingletonTab : public TabAbstract
{
  public:
    static T* getInstance()
    {
      if (s_instance == nullptr)
      {
        s_instance = new T(nullptr);
      }

      return s_instance;
    }

  protected:
    static T *s_instance;
};

#endif // SINGLETON_HPP
