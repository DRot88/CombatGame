#include "creature.hpp"
#include "barbarian.hpp"
#include "vampire.hpp"
#include "blue_men.hpp"
#include "menu.hpp"
#include <iostream>
using std::cout;
using std::endl;

int main() {
  srand(time(0));

  Menu gameMenu;
  gameMenu.displayMenu();
  // Barbarian *b1 = new Barbarian();
  // Barbarian *b2 = new Barbarian();

  // while (b1->getStrength() > 0 && b2->getStrength() > 0) {
  //   int b1attack = b1->attack();
  //   cout << "Attack: " << b1attack << endl;
  //   int defend = b2->defend(b1attack);
  //   cout << "Defense: " << defend << endl;
  // }

  // cout << "b1 strength: " << b1->getStrength() << endl;
  // cout << "b2 strength: " << b2->getStrength() << endl;
  // cout << "b1 Attack 1: " << b1->attack() << endl;
  // cout << "b2 Defense 1: " << b2->defend() << endl;

  // cout << "b2 Attack 1: " << b2->attack() << endl;
  // cout << "b1 Defense 1: " << b1->defend() << endl;

  // cout << "b1 Attack 2: " << b1->attack() << endl;
  // cout << "b2 Defense 2: " << b2->defend() << endl;

  // cout << "b2 Attack 2: " << b2->attack() << endl;
  // cout << "b1 Defense 2: " << b1->defend() << endl;

  // cout << "b1 Attack 3: " << b1->attack() << endl;
  // cout << "b2 Defense 3: " << b2->defend() << endl;

  // cout << "b2 Attack 3: " << b2->attack() << endl;
  // cout << "b1 Defense 3: " << b1->defend() << endl;

  // delete b1;
  // b1 = 0;
  // delete b2;
  // b1 = 0;

  return 0;
}