//
//  kelvin.cpp
//  hw3
//
//  Created by owen on 4/30/21.
//

#include <iostream>


using std::cin;
using std::cout;
using std::endl;

double ctok(double c) {
    double k = c + 273.15;
    return k;
}

int main() {
    double c = 0;
    cout << "This program will convert Celsius to Kelvin." << std::endl;
    cout << "Enter a value in Celsius to convert: ";
    cin >> c;
    while (c < -273.15){
        cout << "Please enter a valid temperature!: ";
        cin >> c;
    }
    double k = ctok(c);
    cout << k << std::endl;
}
