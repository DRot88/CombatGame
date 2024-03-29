/****************************************************************
** Author: Daniel Roteneberg
** Date: 8/2/2017
** Description: The creature battle game will put 2 fighters with
                different abilities against each other, and let 
                the strongest fighter be victorious.
*****************************************************************/
#include "menu.hpp"
#include <iostream>
#include <cstdlib>   
#include <ctime>             
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