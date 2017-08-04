#include "barbarian.hpp"
#include <iostream>
#include <cstdlib>
using std::cout;
using std::endl;

Barbarian::Barbarian() {
  armor = 0;
  strengthPoints = 12;
}

Barbarian::~Barbarian() {}

/****************************************************************
** Function: Barbarian::attack
** Description: The barbarian will roll 2, 6 sided die, and
                return the result as the attack amount.
****************************************************************/

int Barbarian::attack() {
  int dice1 = (rand() % 6) + 1;
  int dice2 = (rand() % 6) + 1;
  attackTotal = dice1 + dice2;
  return attackTotal;
}

/****************************************************************
** Function: Barbarian::defend(int damageReceived)
** Description: The barbarian will roll 2, 6 sided die, and
                return the total damage which is damage received
                less the defense amount.
****************************************************************/

int Barbarian::defend(int damageReceived) {
  int totalDamage = 0;
  int dice1 = (rand() % 6) + 1;
  int dice2 = (rand() % 6) + 1;
  defenseTotal = dice1 + dice2 + armor;
  cout << "The Barbarian had a defense of: " << defenseTotal << endl;
  if (defenseTotal >= damageReceived) {
    cout << "The attack was too weak and had no effect on the Barbarian." << endl;
  } else {
    totalDamage = damageReceived - defenseTotal;
    lowerStrengthPoints(totalDamage);
  }
  return totalDamage;
}

string Barbarian::getType() {
  return "Barbarian";
}