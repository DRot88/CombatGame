#include "creature.hpp"
#include <iostream>

Creature::Creature() {}

Creature::~Creature() {
  std::cout << "Deleting Creature" << std::endl;
}

void Creature::lowerStrengthPoints(int damageTaken) {
  strengthPoints -= damageTaken;
  if (strengthPoints < 0)
  {
    strengthPoints = 0;
  }
}

int Creature::getStrength() {
  return strengthPoints;
}