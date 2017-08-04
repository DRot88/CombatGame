#include "menu.hpp"
#include <iostream>
using std::cout;
using std::endl;

int main() {
  srand(time(0));
  Menu gameMenu;
  cout << "\nWelcome to Creature Battles!\n";
  gameMenu.displayMenu();
  while (gameMenu.replay()) {
    gameMenu.displayMenu();
  }
  return 0;
}