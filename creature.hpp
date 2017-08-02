#ifndef CREATURE_HPP
#define CREATURE_HPP
#include <string>
using std::string;

enum FIGHTERS {BARBARIAN, VAMPIRE, BLUE_MEN, MEDUSA, HARRY_POTTER};

class Creature {
  protected:
    int armor;
    int strengthPoints;
    int attackTotal;
    int defenseTotal;
  public:
    Creature();
    virtual ~Creature();
    virtual int attack() = 0; // pure virtual function
    virtual int defend(int damageTaken) = 0; // pure virtual function
    virtual string getType() = 0; // pure virtual function to return fighter time
    virtual void lowerStrengthPoints(int damageReceived);
    virtual int getStrength();
};

#endif