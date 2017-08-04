#include "blue_men.hpp"
#include <iostream>
#include <cstdlib>
using std::cout;
using std::endl;

Blue_Men::Blue_Men() {
  armor = 3;
  strengthPoints = 12;
  mobSize = 3;
}

Blue_Men::~Blue_Men() {}

/****************************************************************
** Function: Blue_Men::attack()
** Description: The blue men will roll 2, 10 sided die, and the
                result will be returned as the attack.
****************************************************************/

int Blue_Men::attack() {
  int dice1 = (rand() % 10) + 1;
  int dice2 = (rand() % 10) + 1;
  attackTotal = dice1 + dice2;
  return attackTotal;
}

/****************************************************************
** Function: Blue_Men::defend(int damageReceived)
** Description: This will take an int as a parameter which is the
                value the Blue Men are defending against. The 
                Blue Men will roll a varied amount of 6 sided die, 
                and the result of that is added with Blue Men armor
                to give a total defense amount. The blue men will
                lose their mobsize depending on health remaining.
****************************************************************/

int Blue_Men::defend(int damageReceived) {
  int totalDamage = 0;
  defenseTotal = 0;

  for (int x = 0; x < mobSize; x++) {
    int dice = (rand() % 6) + 1;
    defenseTotal += dice;
  }
  defenseTotal += armor;
  cout << "The Blue Men had a defense of: " << defenseTotal << endl;
  if (defenseTotal >= damageReceived) {
    cout << "The attack was too weak and had no effect on the Blue Men." << endl;
  } else {
    totalDamage = damageReceived - defenseTotal;
    lowerStrengthPoints(totalDamage);
    if (this->getStrength() > 8) {
      mobSize = 3;
    } else if (this->getStrength() > 4) {
      mobSize = 2;
      cout << "The Blue Man groups mob size has decreased!" << endl;
    } else if (this->getStrength() >= 1){
      mobSize = 1;
      cout << "The Blue Man mob size has one man left!" << endl;
    }    
  }

  defenseTotal = 0;
  return totalDamage;
}

string Blue_Men::getType() {
  return "Blue Men";
}