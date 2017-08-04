#include "battle.hpp"
#include <iostream>
#include <limits>
using std::cout;
using std::cin;
using std::endl;
using std::streamsize;
using std::numeric_limits;

Battle::Battle() {
  p1 = 0;
  p2 = 0;
}

/*********************************************************************
** Function: Battle::fight()
** Description: This function will call the setFighters() method to 
                ask the users what fighter they would like to use and
                assign each member pointer to the specific creature of
                choice. From there is will loop through a battle
                scenario until either one of the players has lost all
                of there health (strength) points. It will then present
                the winner of the game. 
**********************************************************************/

void Battle::fight() {
  int roundNum = 1;
  cout << "\nTime to battle!" << endl << endl;
  setFighters();

  while (p1->getStrength() > 0 && p2->getStrength() > 0) {
    cout << "Round # " << roundNum << endl << endl;

    int p1attack = p1->attack();
    cout << "Player 1's " << p1->getType() << " Attack: " << p1attack << endl;
    int p2defend = p2->defend(p1attack);
    cout << "Player 2's " << p2->getType() << " Damage Taken: " << p2defend << endl;
    cout << "Player 1's " << p1->getType() << " Strength Remaining: " << p1->getStrength() << endl;
    cout << "Player 2's " << p2->getType() << " Strength Remaining: " << p2->getStrength() << endl << endl;

    if (p1->getStrength() > 0 && p2->getStrength() > 0) {
      int p2attack = p2->attack();
      cout << "Player 2's " << p2->getType() << " Attack: " << p2attack << endl;
      int p1defend = p1->defend(p2attack);
      cout << "Player 1's " << p1->getType() << " Damage Taken: " << p1defend << endl;
      cout << "Player 1's " << p1->getType() << " Strength Remaining: " << p1->getStrength() << endl;
      cout << "Player 2's " << p2->getType() << " Strength Remaining: " << p2->getStrength() << endl << endl;
   }

   if (p1->getStrength() == 0) {
    cout << "Player 2's " << p2->getType() << " has won the battle!" << endl << endl;
   } else if (p2->getStrength() == 0) {
    cout << "Player 1's " << p1->getType() << " has won the battle!" << endl << endl;
   }

    roundNum++;
  }

  delete p1;
  p1 = 0;
  delete p2;
  p2 = 0;  
  return;
}

/*********************************************************************
** Function: displayFighters()
** Description: This function will display a list of all the creatures.
**********************************************************************/

void Battle::displayFighters() {
  cout << "1 - Barbarian" << endl;
  cout << "2 - Vampire" << endl;
  cout << "3 - Blue Men" << endl;
  cout << "4 - Medusa" << endl;
  cout << "5 - Harry Potter" << endl << endl;
}

/*********************************************************************
** Function: setFighters()
** Description: This function will call the displayFighters method and 
                ask the users which fighter they would like. Once 
                selected, it will set each pointer to the creature
                of choice, which will be that players fighter.
**********************************************************************/

void Battle::setFighters() {
  int fighter;
  int fighter2;

  displayFighters();
  cout << "Player 1, please choose a fighter from the above list: ";

    do {
      cin >> fighter;  
      switch(fighter) {
        case 1 : {
          p1 = new Barbarian();
          cout << "\nPlayer 1 has chosen the mighty Barbarian!!" << endl << endl;
          break;
        }
        case 2 : {
          p1 = new Vampire();
          cout << "\nPlayer 1 has chosen the suave Vampire!!" << endl << endl;      
          cin.ignore();
          break;
        }
        case 3 : {
          p1 = new Blue_Men();
          cout << "\nPlayer 1 has chosen the Blue Man Group!!" << endl << endl;
          cin.ignore();
          break;
        }
        case 4 : {
          p1 = new Medusa();
          cout << "\nPlayer 1 has chosen Medusa!!" << endl << endl;
          cin.ignore();
          break;
        }
        case 5 : {
          p1 = new Harry_Potter();
          cout << "\nPlayer 1 has chosen the great wizard, Harry Potter!" << endl << endl;
          cin.ignore();
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
    } while (fighter < 1 || fighter > 5);

  displayFighters();
  cout << "Player 2, please choose a fighter from the above list: ";
  
  do {
    cin >> fighter2;
    switch(fighter2) {
      case 1 : {
        p2 = new Barbarian();
        cout << "\nPlayer 2 has chosen the mighty Barbarian!!" << endl << endl;
        break;
      }
      case 2 : {
        p2 = new Vampire();
        cout << "\nPlayer 2 has chosen the suave Vampire!!" << endl << endl;
        cin.ignore();
        break;
      }
      case 3 : {
        p2 = new Blue_Men();
        cout << "\nPlayer 2 has chosen the Blue Man Group!!" << endl << endl;
        cin.ignore();
        break;
      }
      case 4 : {
        p2 = new Medusa();
        cout << "\nPlayer 2 has chosen Medusa!!" << endl << endl;
        cin.ignore();
        break;
      }
      case 5 : {
        p2 = new Harry_Potter();
        cout << "\nPlayer 2 has chosen the great wizard, Harry Potter!" << endl << endl;      
        cin.ignore();
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
  } while (fighter2 < 1 || fighter2 > 5);
}