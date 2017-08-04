#ifndef MEDUSA_HPP
#define MEDUSA_HPP
#include "creature.hpp"
#include <string>
using std::string;

class Medusa : public Creature {
  private:
    
  public:
    Medusa();
    ~Medusa();
    virtual int attack(); // 2d6 default
    virtual int defend(int damageReceived); // 1d6 default
    virtual string getType();
    void glare(int attack);
};

#endif