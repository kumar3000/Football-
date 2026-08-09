#include <iostream>
#include <string>
#include "player.hpp"
#include "colors.hpp"

Player::Player() {
    int i;

    std::cout << "Name: ";
    std::getline(std::cin, this->name);
    std::string rating_str;
    do {
      std::cout << "Rating (1-5): ";
      std::getline(std::cin, rating_str);
      this->rating = std::stoi(rating_str);
    } while (this->rating < 1 || this->rating > 5);

    // Construct Stars String
    for (i = 0; i < 5; i++) {
      if (i < this->rating) {
        this->stars += "★";
      } else {
        this->stars += "☆";
      }
    }

    // Color rating
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

std::string Player::getName() const { return this->name; }
void Player::setName(std::string new_name) { this->name = new_name; }

std::string Player::getStars() const { return this->stars; }
void Player::setStars(std::string new_stars) { this->stars = new_stars; }

std::string Player::getCollege() const { return this->college; }
void Player::setCollege(std::string new_college) { this->college = new_college; }

std::string Player::bio() {
    std::string bio = WHITE + this->name;
    bio += " | " + std::to_string(this->age) + "y/o | " + RESET;
    bio += this->stars;
    return bio;
}

int Player::getRating() const { return this->rating; }
void Player::setRating(int new_rating) { this->rating = new_rating; }

int Player::getAge() const { return this->age; }
void Player::setAge(int new_age) { this->age = new_age; }

int Player::getExp() const { return this->experience; }
void Player::setExp(int new_exp) { this->experience = new_exp; }
