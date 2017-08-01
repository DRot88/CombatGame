#include "creature.hpp"
#include <iostream>

Creature::Creature() {}

Creature::~Creature() {
  std::cout << "Deleting Creature" << std::endl;
}

void Creature::lowerStrengthPoints(int damageTaken) {
  strengthPoints -= damageTaken;
}

int Creature::getStrength() {
  return strengthPoints;
}