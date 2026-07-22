#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
  private:
    std::string name;
    int rating;
    int age = 21;

  public:
    Player(std::string, int);
    std::string getName();
};

#endif
