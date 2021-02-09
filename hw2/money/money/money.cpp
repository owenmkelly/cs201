//
//  names.cpp
//  Owen Kelly
//  CS F201
//  8 February 2021

#include <iostream>
#include <vector>

int main (int argc, char **argv) {
  int pennies = 0;
  int nickles = 0;
  int dimes = 0;
  int quarters = 0;
  int dollars = 0;

  std::cout << "Please input the number of coins you have. Press 'Enter' to input values for the next coin." << std::endl;
  std::cout << "Pennies: ";
  std::cin >> pennies;
  std::cout << "Nickles: ";
  std::cin >> nickles;
  std::cout << "Dimes: ";
  std::cin >> dimes;
  std::cout << "Quarters: ";
  std::cin >> quarters;
  std::cout << "Dollars: ";
  std::cin >> dollars;

  std::cout << std::endl;

  std::cout << "You have " << pennies << (pennies != 1 ? " pennies." : " penny.") << std::endl;
  std::cout << "You have " << nickles << (nickles != 1 ? " nickles." : " nickle.") << std::endl;
  std::cout << "You have " << dimes << (dimes != 1 ? " dimes." : " dime.") << std::endl;
  std::cout << "You have " << quarters << (quarters != 1 ? " quarters." : " quarter.") << std::endl;
  std::cout << "You have " << dollars << (dollars != 1 ? " dollars." : " dollar.") << std::endl;

  float total = 0;
  total += pennies * 0.01;
  total += nickles * 0.05;
  total += dimes * 0.1;
  total += quarters * 0.25;
  total += dollars;

  std::cout << "You have $" << total << " in total" << std::endl;

  return 0;
}
