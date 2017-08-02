#ifndef VAMPIRE_HPP
#define VAMPIRE_HPP
#include "creature.hpp"
#include <string>
using std::string;

class Vampire : public Creature {
  private:

  public:
    Vampire();
    ~Vampire();
    bool charm(); // 50% chance of opponent not attacking
    virtual int attack(); // 1d12 default
    virtual int defend(int damageReceived); // 1d6 default -- if charm no damage taken
    virtual string getType();
};


#endif