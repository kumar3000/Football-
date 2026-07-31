#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <string>

class Player {
  private:
    std::string name;
    std::string stars;
    std::string college;
    int rating;
    int age = 18;

  public:
    Player();
    std::string getName() const;
    void setName(std::string);
    std::string getStars() const;
    void setStars(std::string);
    std::string getCollege() const;
    void setCollege(std::string);
    std::string bio();
    int getRating() const;
    void setRating(int);
    int getAge() const;
    void setAge(int);
};

#endif
