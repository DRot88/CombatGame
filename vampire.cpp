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

Vampire::~Vampire() {
  cout << "Deleting Vampire" << endl;
}

int Vampire::attack() {
  int dice = (rand() % 12) + 1;
  attackTotal = dice;
  return attackTotal;
}

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