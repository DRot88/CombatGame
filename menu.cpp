#include "menu.hpp"
#include "battle.hpp"
#include <iostream>
#include <cstdlib>
using std::cout;
using std::cin;
using std::endl;

Menu::Menu() {
  return;
}

/****************************************************************
** Function: displayMenu
** Description: This will display the options for the user to 
                use for the RPS Game.
****************************************************************/

void Menu::displayMenu() {
  int choice = 0;
  cout << "\n1: Play Game" << endl;
  cout << "2: Exit" << endl << endl;
  cout << "Please choose from one of the above options: ";
  
  do {
    cin >> choice;    
    switch(choice) {
      case 1 : {
        cin.ignore();
        Battle game;
        game.fight();
        break;
      }
      case 2 : {
        cin.ignore();
        cout << "Exiting the program." << endl << endl;
        break;
      }
      default : {
        cout << "Invalid choice." << endl << endl;
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  
        continue;
      }
    }
    break;
  } while (choice < 1 || choice > 2);
}

