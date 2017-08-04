#include "medusa.hpp"
#include <iostream>
#include <cstdlib>
using std::cout;
using std::endl;

Medusa::Medusa() {
  armor = 3;
  strengthPoints = 8;
}

Medusa::~Medusa() {
  cout << "Deleting Medusa" << endl;
}

int Medusa::attack() {
  int dice1 = (rand() % 6) + 1;
  int dice2 = (rand() % 6) + 1;
  attackTotal = dice1 + dice2;
  glare(attackTotal);
  return attackTotal;
}

void Medusa::glare(int attack) {
  if (attack == 12) {
    cout << "Medusa has used her mighty Glare and turned the opponent to stone!" << endl;
    attackTotal = 9999;
  }
}

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