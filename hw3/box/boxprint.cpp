//
//  boxprint.cpp
//  hw3
//
//  Created by owen on 2/27/21.
//

#include "boxer.hpp"
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;
using std::cin;

int main(int argc, char * argv[]) {
    std::string box_text = "";
    int box_size = 0;

    cout << "Input text for inside the box: ";
    cin >> box_text;

    cout << "Enter a number for the box size: ";
    cin >> box_size;

    if (box_size <= 0) {
        cout << "You entered an invalid input." << endl;
        cout << "Please try again with a positive integer." << endl;
    }

    else {
        boxPrinter(box_text, box_size);
    }

    cout << "" << endl;
    cout << "Press ENTER to quit ";
    while (cin.get() != '\n') ;

    return 0;
}
