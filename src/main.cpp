//--- Includes
#include <iostream>
#include "Player.h"

//--- Defines
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define RETURN "\033[0m"

//--- Utilities
void clear() { std::cout << "\033[2J\033[1;1H"; }

//--- Main
int main() {
  std::string name;
  int rating;

  std::cout << "Name: ";
  std::cin >> name;
  std::cout << "Rating (1-5): ";
  std::cin >> rating;
  Player player(name, rating);

  for (int i = 0; i < rating; i++) {
    std::cout << RED << "*";
  }
  std::cout << RETURN << BLUE << " " << player.getName() << RETURN << std::endl;

  return 0;
}
