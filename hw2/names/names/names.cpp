//
//  names.cpp
//  Owen Kelly
//  CS F201
//  8 February 2021


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

void inputNames (std::vector<std::string> & names) {
  for (int i = 0; i < 10; i++) {
    std::string name;
    std::cout << "Please enter a name: ";
    std::getline(std::cin, name);
    names.push_back(name);
  }
}

bool doesNameExist (std::string & name, std::vector<std::string> & names) {
  for (int i = 0; i < (int) names.size(); i++) {
    if (names[i] == name) {
      return true;
    }
  }
  return false;
}

void printNames (std::vector<std::string> & names) {
  for (int i = 0; i < (int) names.size(); i++) {
    std::cout << names[i];
    if (i != (int) names.size() - 1) {
      std::cout << ", " << std::endl;
    }
  }
  std::cout << std::endl;
}

bool sortFunction (std::string a, std::string b) {
  return a.size() < b.size();
}

void sortNames (std::vector<std::string> & names) {
  std::cout << "Sorting names from shortest to longest..." << std::endl;
  std::sort(names.begin(), names.end(), sortFunction);
}

int main (int argc, char **argv) {
  std::vector<std::string> names;

  inputNames(names);
  printNames(names);
  sortNames(names);
  printNames(names);
  return 0;
}
