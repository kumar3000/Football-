#include <iostream>
#include <cstdlib>
#include <ctime>
#include "college.hpp"
#include "colors.hpp"

College::College(Player* set_player) {
    this->player = set_player;
    
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    int team_idx = rand() % 8;
    int mascot_idx = rand() % 8;

    std::cout << WHITE << "*** SIGNING DAY ***" << RESET << std::endl;
    this->player->setCollege(collegeCities[team_idx]);
    this->mascot = mascots[mascot_idx];
    std::cout << WHITE << this->player->getCollege() << " " << this->mascot << RESET << std::endl;
}
