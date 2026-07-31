//--- Includes
#include <iostream>
#include <string>
#include "player.hpp"
#include "colors.hpp"
#include "college.hpp"

//--- Utilities
void clear() { std::cout << "\033[2J\033[1;1H"; }
void error(std::string e) {
  std::cout << RED << e << RESET << std::endl;
  std::exit(1);
}

//--- Main
int main() {
  // Character Creation
  clear();
  Player* player = new Player();
  if (player == nullptr) error("player == nullptr");

  // Display Character
  clear();
  std::cout << player->bio() << std::endl;
  College* college = new College(player);
  if (college == nullptr) error("college == nullptr");

  delete college;
  delete player;
  return 0;
}
