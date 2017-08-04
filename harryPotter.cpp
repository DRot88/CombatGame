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

Harry_Potter::~Harry_Potter() {
  cout << "Deleting Harry_Potter" << endl;
}

int Harry_Potter::attack() {
  int dice1 = (rand() % 6) + 1;
  int dice2 = (rand() % 6) + 1;
  attackTotal = dice1 + dice2;
  return attackTotal;
}

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