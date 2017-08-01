#include "barbarian.hpp"
#include <iostream>
#include <cstdlib>
using std::cout;
using std::endl;

Barbarian::Barbarian() {
  armor = 0;
  strengthPoints = 12;
  dieAmount = 2;
  dieSides = 6;
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

int Barbarian::defend() {
  int dice1 = (rand() % 6) + 1;
  int dice2 = (rand() % 6) + 1;
  defenseTotal = dice1 + dice2; 
  return defenseTotal;
}