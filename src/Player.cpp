#include "Player.h"

Player::Player(std::string n, int stars) : name(n), rating(stars) {}

std::string Player::getName() { return this->name; }
