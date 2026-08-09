#include "college.hpp"
#include "colors.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

College::College(Player *set_player) {
  this->player = set_player;

  std::srand(static_cast<unsigned int>(std::time(nullptr)));
  int team_idx = rand() % 8;
  int mascot_idx = rand() % 8;

  std::cout << WHITE << "*** SIGNING DAY ***" << RESET << std::endl;
  this->player->setCollege(collegeCities[team_idx]);
  this->mascot = mascots[mascot_idx];
  std::cout << WHITE << this->player->getCollege() << " " << this->mascot
            << RESET << std::endl;
}

void College::sim_season() {
  char loop = 'Y';
  for (int i = 0; i < this->season_length; i++) {
    printf("\n*** WEEK %02d ***\n", i + 1);
    std::cout << "Next Week <Y/n>? ";
    std::cin.get(loop);
    if (loop == 'n') {
      break;
    }
  }
}
