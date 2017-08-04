#include "harryPotter.hpp"
#include <iostream>
#include <cstdlib>
using std::cout;
using std::endl;

Harry_Potter::Harry_Potter() {
  armor = 0;
  strengthPoints = 10;
  lives = 1;
}

Harry_Potter::~Harry_Potter() {}

/****************************************************************
** Function: Harry_Potter::attack()
** Description: Harry will roll 2, 6 sided die, and the
                result will be returned as the attack.
****************************************************************/

int Harry_Potter::attack() {
  int dice1 = (rand() % 6) + 1;
  int dice2 = (rand() % 6) + 1;
  attackTotal = dice1 + dice2;
  return attackTotal;
}

/****************************************************************
** Function: Harry_Potter::defend(int damageReceived)
** Description: Harry will roll 2, 6 sided die, and
                return the total damage which is damage received
                less the defense amount. If Harry is on his
                first life, he will use the power of hogwarts
                to be revived for one more life.
****************************************************************/

int Harry_Potter::defend(int damageReceived) {
  int totalDamage = 0;
  int dice1 = (rand() % 6) + 1;
  int dice2 = (rand() % 6) + 1;
  defenseTotal = dice1 + dice2 + armor;
  cout << "Harry Potter had a defense of: " << defenseTotal << endl;
  if (defenseTotal >= damageReceived) {
    cout << "The attack was too weak and had no effect on Harry Potter." << endl;
  } else {
    totalDamage = damageReceived - defenseTotal;
    lowerStrengthPoints(totalDamage);
    if(hogwarts()) {
      totalDamage = 0;
    }
  }
  return totalDamage;
}

/****************************************************************
** Function: Harry_Potter::hogwarts()
** Description: If it's Harry's first life, and he has no strength
                remaining, he will be revived and have his
                strength set back to 20.
****************************************************************/

bool Harry_Potter::hogwarts() {
  if ((lives == 1) && (strengthPoints == 0)) {
    lives--;
    strengthPoints = 20;
    cout << "Harry used the power of hogwarts and has been revived!" << endl;
    return true;
  }
  return false;
}

string Harry_Potter::getType() {
  return "Harry_Potter";
}