#ifndef BARBARIAN_HPP
#define BARBARIAN_HPP
#include "creature.hpp"
#include <string>
using std::string;

class Barbarian : public Creature {
  private:

  public:
    Barbarian();
    ~Barbarian();
    virtual int attack(); // 2d6 default
    virtual int defend(int damageReceived); // 2d6 default
    virtual string getType();
};

#endif