//
//  collatz.cpp
//  hw3
//
//  Created by owen on 4/30/21.
//

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

//Collatz sequence
void collatz(int &k)
{
    
    //If k is even, divide it by 2
    if (k % 2 == 0)
    {
        k /= 2;
        cout << k << " ";
    }

    //If k is odd, multiply by 3 and add 1
    else
    {
        k *= 3;
        k++;
        cout << k << " ";
    }
}

int main()
{
    int k;
    cout << "Please enter a positive integer.\n";
    cin >> k;
    while (k != 1)
    {
        if (k > 0)
        {
            cout << k << " ";
            do
            {
                collatz(k);
            } while (k != 1);
        }
        else
        {
            cout << "Improper entry. Please enter a positive number.\n";
            cin >> k;
        }
    }
    

    return 0;
}
