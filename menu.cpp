#include "menu.hpp"
#include "battle.hpp"
#include <iostream>
#include <cstdlib>
#include <limits>
using std::cout;
using std::cin;
using std::endl;
using std::streamsize;
using std::numeric_limits;

Menu::Menu() {
  return;
}

/****************************************************************
** Function: displayMenu
** Description: This will display the options for the user to 
                choose from for the battle game.
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
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  
        continue;
      }
    }
    break;
  } while (choice < 1 || choice > 2);
}

/****************************************************************
** Function: replay
** Description: This will give the user the option to start the
                battle game from the beginning.
****************************************************************/

bool Menu::replay() {
  bool replay = false;
  char choice;
  cout << "\nWould you like to start over? ([Y]es or [N]o): ";
  do {
    cin >> choice;
    if (choice == 'y' || choice == 'Y') {
      replay = true;
    }
  } while (choice!= 'y' && choice != 'Y' && choice != 'n' && choice != 'N');
  return replay;
}

