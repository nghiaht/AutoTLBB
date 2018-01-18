#ifndef SINGLETON_HPP
#define SINGLETON_HPP

#include <QFrame>
#include <QDebug>

template<typename T>
class SingletonTab : public QFrame
{
  public:
    static T& getInstance()
    {
      static T s_instance;

      return s_instance;
    }
};

#endif // SINGLETON_HPP
