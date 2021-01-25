//
//  main.cpp
//  lab2
//
//  Created by owen on 1/25/21.
//

#include <iostream>

int main() {
    using std::cout;
    using std::cin;
    using std::endl;
    
    int integer = 0;
    cout << "Input a Whole Number Integer" << endl;
    cin >> integer;
    
    int nextint = integer + 1;
    cout << "Your next-number square is ";
    cout << nextint * nextint << endl;
}
