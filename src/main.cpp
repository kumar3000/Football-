//--- Includes
#include <iostream>
#include <string>
#include "player.hpp"
#include "colors.hpp"
#include "college.hpp"

//--- Globals
std::string loop = "Y";

//--- Utilities
void clear() { std::cout << "\033[2J\033[1;1H"; }
void error(std::string e) {
  std::cout << RED << e << RESET << "\n";
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
  std::cout << player->bio() << "\n";

  // College Simulation
  College* college = new College(player);
  if (college == nullptr) error("college == nullptr");
  while (player->getAge() != 22 && loop != "n") {
    clear();
    player->setExp(player->getExp() + 1);
    std::cout<< "Year " << player->getExp() << "\n";
    college->sim_season();
    player->setAge(player->getAge() + 1);
    std::cout << "Continue <Y/n>? ";
    std::getline(std::cin, loop);
  }

  delete college;
  delete player;
  return 0;
}
