#ifndef PRO_LEAGUE_HPP
#define PRO_LEAGUE_HPP

#include "player.hpp"
#include <string>
#include <vector>

class Pro_League {
private:
  Player *player;
  std::vector<std::string> collegeCities = {
      "Boston", "Michigan",    "Texas",    "Berkeley",
      "Athens", "Gainesville", "Tennessee"};
  std::vector<std::string> mascots = {
      "Owls", "Lions", "Tigers", "Pirates", "Pioneers", "Gators", "Minutemen"};
  std::string mascot;
  int season_length = 17;

public:
  Pro_League(Player *);
  void sim_season();
};

#endif
