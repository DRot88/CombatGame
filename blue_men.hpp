#ifndef BLUE_MEN_HPP
#define BLUE_MEN_HPP
#include "creature.hpp"
#include <string>
using std::string;

class Blue_Men : public Creature {
  private:
    int mobSize;
  public:
    Blue_Men();
    ~Blue_Men();
    virtual int attack(); // 2d10 default
    virtual int defend(int damageReceived); // 3d6 default -- depends on "men" left
    virtual string getType();
};

#endif