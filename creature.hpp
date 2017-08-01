#ifndef CREATURE_HPP
#define CREATURE_HPP

class Creature {
  private:
    int attack;
    int defense;
    int armor;
    int strengthPoints;
  public:
    Creature();
    void setStrengthPoints(int); // int can be damage taken from attack
    virtual int attack() = 0; // pure virtual function
    virtual int defend() = 0; // pure virtual function
};

#endif