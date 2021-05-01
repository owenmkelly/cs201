//
//  boxer.cpp
//  hw3
//
//  Created by owen on 2/27/21.
//

#include "boxer.hpp"
#include <iostream>
#include <stdio.h>
#include <string>
using std::cin;
using std::cout;
using std::endl;

void boxPrinter(std::string name, int stars) {
    int i = 0;
    while (i < stars) {
        int j = 1;
        while (j < name.size() + 2 + (stars * 2)) {
            cout << "*";
            j++;
        }
    
        cout << "*";
        cout << "\n";
        i++;
    }
    
    int left1 = 0;
    while (left1 < stars) {
        cout << "*";
        left1++;
    }

    int center1 = 0;
    while (center1 < name.size() + 2) {
        cout << " ";
        center1++;
    }

    int right1 = 0;
    while (right1 < stars) {
        cout << "*";
        right1++;
    }
    
    cout << " " << endl;

    int left_spaces = 0;
    while (left_spaces < stars) {
        cout << "*";
        left_spaces++;
    }
    
    cout << " ";
    cout << name;
    cout << " ";

    int right_spaces = 0;
    while (right_spaces < stars) {
        cout << "*";
        right_spaces++;
    }

    cout << " " << endl;

    int left2 = 0;
    while (left2 < stars) {
        cout << "*";
        left2++;
    }

    int center2 = 0;
    while (center2 < name.size() + 2) {
        cout << " ";
        center2++;
    }

    int right2 = 0;
    while (right2 < stars) {
        cout << "*";
        right2++;
    }

    cout << " " << endl;

    int k = 0;

    while (k < stars) {
        int l = 1;
        while (l < name.size() + 2 + (stars * 2)) {
            cout << "*";
            l++;
        }
    
        cout << "*";
        cout << "\n";
        k++;
    }
}
