#include "menu.hpp"
#include <iostream>
using std::cout;
using std::endl;

int main() {
  srand(time(0));
  Menu gameMenu;
  gameMenu.displayMenu();
  return 0;
}