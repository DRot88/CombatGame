#ifndef BARBARIAN_HPP
#define BARBARIAN_HPP
#include "creature.hpp"

class Barbarian : public Creature {
  private:

  public:
    Barbarian();
    ~Barbarian();
    virtual int attack(); // 2d6 default
    virtual int defend(int damageReceived); // 2d6 default
};

#endif