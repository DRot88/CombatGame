#ifndef BATTLE_HPP
#define BATTLE_HPP
#include "creature.hpp"
#include "barbarian.hpp"
#include "vampire.hpp"

class Battle {
  private:
    Creature *p1; // pointer to player 1 creature
    Creature *p2; // pointer to player 2 creature
  public:
    Battle();
    void fight();
    void displayFighters();
    void setFighters();
};

#endif