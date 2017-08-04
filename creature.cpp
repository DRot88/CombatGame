#include "creature.hpp"
#include <iostream>

Creature::Creature() {}

Creature::~Creature() {}

/****************************************************************
** Function: lowerStrengthPoints(int damageTaken)
** Description: This function will lower the health of the
                creatures until there is no health remaining.
****************************************************************/

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