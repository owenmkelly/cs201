#include <iostream>

int main(int argc, char **argv) {
  int largest = 0;
  int lastInput;

  std::cout << "Input positive numbers, pressing 'Enter' after each integer. Enter 0 to stop adding input." << std::endl;

  std::cout << "Enter an integer (0 to end): ";
  std::cin >> largest;
  lastInput = largest;

  while (lastInput != 0) {
    std::cout << "Enter an integer (0 to end): ";
    int input;
    std::cin >> input;
    if (input > largest) {
      largest = input;
    }
    lastInput = input;
  }

  if (largest == 0) {
    std::cout << "No valid input." << std::endl;
  } else {
    std::cout << "The largest number entered was " << largest << std::endl;
  }

  return 0;
}
