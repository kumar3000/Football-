#ifndef COLLEGE_HPP
#define COLLEGE_HPP

#include "player.hpp"
#include <string>
#include <vector>

class College {
private:
  Player *player;
  std::vector<std::string> collegeCities = {
      "Boston", "Michigan",    "Texas",    "Berkeley",
      "Athens", "Gainesville", "Tennessee"};
  std::vector<std::string> mascots = {
      "Owls", "Lions", "Tigers", "Pirates", "Pioneers", "Gators", "Minutemen"};
  std::string mascot;
  int season_length = 12;

public:
  College(Player *);
  void sim_season();
};

#endif
