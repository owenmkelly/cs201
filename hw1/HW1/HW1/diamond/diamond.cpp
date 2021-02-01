//
//  diamond.cpp
//  HW1
//  Owen Kelly
//  Date: 1/29/21.
//

#include <iostream>

int main (int argc, char** argv) {
  std::cout << "Input a positive integer." << std::endl;

  int posInt = 0;
  std::cin >> posInt;

  if (posInt < 1) {
    std::cout << "Invalid input. Please enter a positive integer" << std::endl;
    return 1;
  }

  // Prints the top of the diamond
  for (int line = 1; line <= posInt; line++) {
    int numSpaces = posInt - line;
    for (int space = 0; space < numSpaces; space++ ) {
      std::cout << ' ';
    }
    int numPounds = line * 2 - 1;
    for (int pound = 0; pound < numPounds; pound++) {
      std::cout << '#';
    }
    std::cout << std::endl;
  }

  // Bottom half of the diamond
  for (int line = 1; line < posInt; line++) {
    for (int space = 0; space < line; space ++) {
      std::cout << ' ';
    }
    int numPounds = (posInt - line) * 2 - 1;
    for (int pound = 0; pound < numPounds; pound++) {
      std::cout << '#';
    }
    std::cout << std::endl;
  }

  return 0;
}
