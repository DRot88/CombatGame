#include "barbarian.hpp"
#include <iostream>
#include <cstdlib>
using std::cout;
using std::endl;

Barbarian::Barbarian() {
  armor = 0;
  strengthPoints = 12;
}

Barbarian::~Barbarian() {
  cout << "Deleting Barbarian" << endl;
}

int Barbarian::attack() {
  int dice1 = (rand() % 6) + 1;
  int dice2 = (rand() % 6) + 1;
  attackTotal = dice1 + dice2;
  return attackTotal;
}

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