#include "medusa.hpp"
#include <iostream>
#include <cstdlib>
using std::cout;
using std::endl;

Medusa::Medusa() {
  armor = 3;
  strengthPoints = 8;
}

Medusa::~Medusa() {}

/****************************************************************
** Function: Medusa::attack()
** Description: Medusa will roll 2, 6 sided die, and the
                result will be returned as the attack. This will
                also call the glare function to test if Medusa
                will use the special attack.
****************************************************************/

int Medusa::attack() {
  int dice1 = (rand() % 6) + 1;
  int dice2 = (rand() % 6) + 1;
  attackTotal = dice1 + dice2;
  glare(attackTotal);
  return attackTotal;
}

/****************************************************************
** Function: Medusa::glare()
** Description: If the attack Medusa produces results in a 12,
                she will user her special attack, which turns
                the opponent to stone. This results in an instant
                kill.
****************************************************************/

void Medusa::glare(int attack) {
  if (attack == 12) {
    cout << "Medusa has used her mighty Glare and turned the opponent to stone!" << endl;
    attackTotal = 9999;
  }
}

/****************************************************************
** Function: Medusa::defend(int damageReceived)
** Description: Medusa will roll 1, 6 sided die, and
                return the total damage which is damage received
                less the defense amount.
****************************************************************/

int Medusa::defend(int damageReceived) {
  int totalDamage = 0;
  int dice = (rand() % 6) + 1;
  defenseTotal = dice + armor;
  cout << "Medusa had a defense of: " << defenseTotal << endl;
  if (defenseTotal >= damageReceived) {
    cout << "The attack was too weak and had no effect on Medusa." << endl;
  } else {
    totalDamage = damageReceived - defenseTotal;
    lowerStrengthPoints(totalDamage);
  }
  return totalDamage;
}

string Medusa::getType() {
  return "Medusa";
}