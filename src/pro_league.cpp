#include "pro_league.hpp"
#include "player.hpp"
#include <iostream>

Pro_League::Pro_League(Player *set_player) { this->player = set_player; }

void Pro_League::sim_season() {
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
