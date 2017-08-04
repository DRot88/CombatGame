#include "vampire.hpp"
#include <iostream>
#include <cstdlib>
#include <string>
using std::cout;
using std::endl;
using std::string;

Vampire::Vampire() {
  armor = 1;
  strengthPoints = 18;
}

Vampire::~Vampire() {}

/****************************************************************
** Function: Vampire::attack()
** Description: This will 1, 12 sides die, and return the result.
****************************************************************/

int Vampire::attack() {
  int dice = (rand() % 12) + 1;
  attackTotal = dice;
  return attackTotal;
}

/****************************************************************
** Function: Vampire::defend(int damageReceived)
** Description: This will take an int as a parameter which is the
                value the vampire is defending against. The 
                vampire will roll 1, 6 sided die, and the result
                of that is added with vampire armor to give a
                total defense amount. Also, the vampire has the 
                ability to charm, which would prevent any damage
                from being inflicted.
****************************************************************/

int Vampire::defend(int damageReceived) {
  int totalDamage = 0;
  int dice = (rand() % 6) + 1;
  defenseTotal = dice + armor;
  cout << "The Vampire had a defense of: " << defenseTotal << endl;
  if (charm()) {
    cout << "The Vampire used Charm and convinced the opponent to withdraw attack" << endl;
  } else if (defenseTotal >= damageReceived) {
    cout << "The attack was too weak and had no effect on the Vampire." << endl;
  } else {
    totalDamage = damageReceived - defenseTotal;
    lowerStrengthPoints(totalDamage);
  }
  return totalDamage;
}

/****************************************************************
** Function: charm()
** Description: This will roll a 2 sided die, and if a 1 is rolled
                it will turn on the vampire charm to be used 
                in it's defense.
****************************************************************/

bool Vampire::charm() {
  int useCharm = false;
  int dice = (rand() % 2) + 1;
  if (dice == 1) {
    useCharm = true;
  }
  return useCharm;
}

string Vampire::getType() {
  return "Vampire";
}