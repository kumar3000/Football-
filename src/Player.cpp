#include <iostream>
#include <string>
#include "player.hpp"
#include "colors.hpp"

Player::Player() {
    int i;

    std::cout << "Name: ";
    std::getline(std::cin, this->name);
    
    do {
      std::cout << "Rating (1-5): ";
      std::cin >> this->rating;
    } while (this->rating < 1 || this->rating > 5);

    // Construct Stars String
    for (i = 0; i < 5; i++) {
      if (i < this->rating) {
        this->stars += "★";
      } else {
        this->stars += "☆";
      }
    }
    this->stars += RESET;
    switch (this->rating) {
        case 1:
            this->stars.insert(0, RED);
            break;
        case 2:
            this->stars.insert(0, YELLOW);
            break;
        case 3:
            this->stars.insert(0, GREEN);
            break;
        case 4:
            this->stars.insert(0, BLUE);
            break;
        case 5:
            this->stars.insert(0, WHITE);
            break;
    }
}

std::string Player::getName() { return this->name; }

std::string Player::getStars() { return this->stars; }

std::string Player::bio() {
    std::string bio = WHITE + this->name;
    bio += " | " + std::to_string(this->age) + "y/o | " + RESET;
    bio += this->stars;
    return bio;
}

int Player::getRating() { return this->rating; }

int Player::getAge() { return this->age; }