#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <string>

class Player {
  private:
    std::string name;
    std::string stars;
    int rating;
    int age = 18;

  public:
    Player();
    std::string getName();
    std::string getStars();
    std::string bio();
    int getRating();
    int getAge();
};

#endif
