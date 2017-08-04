#ifndef HARRYPOTTER_HPP
#define HARRYPOTTER_HPP
#include "creature.hpp"
#include <string>
using std::string;

class Harry_Potter : public Creature {
  private:
    int lives;
  public:
    Harry_Potter();
    ~Harry_Potter();
    virtual int attack(); // 2d6 default
    virtual int defend(int damageReceived); // 2d6 default
    virtual string getType();
    bool hogwarts();
};


#endif