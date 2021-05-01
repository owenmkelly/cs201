#include <iostream>
#include <iomanip>

int main (int argc, char **argv) {
  // Define vector properties
  float ax;
  float ay;
  float az;

  float bx;
  float by;
  float bz;

  std::cout << "This program calculates the dot and cross products of two vectors." << std::endl;
  std::cout << "Enter 3 floating point values for vector A" << std::endl;

  std::cout << "Ax: ";
  std::cin >> ax;

  std::cout << "Ay: ";
  std::cin >> ay;
  
  std::cout << "Az: ";
  std::cin >> az;

  std::cout << "Enter 3 floating point values for vector B" << std::endl;

  std::cout << "Bx: ";
  std::cin >> bx;

  std::cout << "By: ";
  std::cin >> by;

  std::cout << "Bz: ";
  std::cin >> bz;

  float dot = ax * bx + ay * bx + az * bz;
  std::cout << "A dot B = " << std::setprecision(5) << dot << std::endl;

  float cx = ay * bz - az * by;
  float cy = ax * bz - az * bx;
  float cz = ax * by - ay * bx;

  std::cout << "A cross B = (" << std::setprecision(6) << cx << ", " << cy << ", " << cz << ")" << std::endl;

  return 0;
}
