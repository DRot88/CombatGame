#include "creature.hpp"
#include "barbarian.hpp"
#include <iostream>
using std::cout;
using std::endl;

int main() {
  srand(time(0));
  Barbarian *b1 = new Barbarian();
  cout << "Attack 1: " << b1->attack() << endl;
  cout << "Attack 2: " << b1->attack() << endl;
  cout << "Attack 3: " << b1->attack() << endl;
  cout << "Attack 4: " << b1->attack() << endl;
  cout << "Attack 5: " << b1->attack() << endl;
  cout << "Attack 6: " << b1->attack() << endl;
  cout << "Defense 1: " << b1->defend() << endl;
  cout << "Defense 2: " << b1->defend() << endl;
  cout << "Defense 3: " << b1->defend() << endl;
  cout << "Defense 4: " << b1->defend() << endl;
  cout << "Defense 5: " << b1->defend() << endl;
  cout << "Defense 6: " << b1->defend() << endl;
  delete b1;
  b1 = 0;

  return 0;
}