//
//  fifo.cpp
//  hw4
//
//  Created by owen on 5/1/21.
//

#include <string>
#include <vector>
#include <iostream>
#include <sstream>

using std::string;
using std::vector;
using std::cin;
using std::getline;
using std::cout;
using std::endl;
using std::istringstream;

string getItem()
{
    cout << "Enter an item" << endl;
    string str;
    getline(cin, str);
    return str;
}


int getKey()
{
    cout << "Enter 1 to add an item to the container" << endl;
    cout << "Enter 2 to take an item from the container" << endl;
    cout << "Enter 0 to quit" << endl;

    int key;
    string str;
    getline(cin, str);
    istringstream instream(str);
    instream >> key;

    if (!instream || key < 0 || key > 2)
        return -1; //Indicates error
    return key;
}

/*
Returns true if the vector is empty
*/
bool isContainerEmpty(const vector<string>& container)
{
    if (container.size() == 0)
    {
        return true;
    }
    return false;
}

/*
Prints the contents of the container
*/
void printContainer(const vector<string>& container)
{
    for (string item : container)
        cout << item << endl;
}

//First In First Out

/*
Adds item to the container
*/
void fifoPush(vector<string>& container, const string& item)
{
    container.push_back(item);
    cout << item << " added." << endl;
}

/*
Removes the first item in the container
and returns it
*/
string fifoPop(vector<string>& container)
{
    string str = " ";
    if (isContainerEmpty(container))
    {
        cout << "The container is empty." << endl;
    }
    else
    {
        str = container[0];
        cout << str << " removed." << endl;
        container.erase(container.begin());
    }
    return str;
}

//Last In First Out

/*
Adds item to the container
*/
void lifoPush(vector<string>& container, const string& item)
{
    container.push_back(item);
    cout << item << " added." << endl;
}

/*
Removes the last item in the container
and returns it
*/
string lifoPop(vector<string>& container)
{
    string str = " ";
    if (isContainerEmpty(container))
    {
        cout << "The container is empty." << endl;
    }
    else
    {
        str = container[container.size() - 1];
        cout << str << " removed." << endl;
        container.pop_back();
    }
    return str;
}

/*
Test for Fifo
*/
bool testFifo()
{
    int key = 1;
    vector<string> container;
    string item;
    
    while (key != 0)
    {
        key = getKey();
        switch (key)
        {
            case 0: //Quit
                break;
            case 1:
                item = getItem();
                fifoPush(container, item);
                break;
            case 2:
                item = fifoPop(container);
                break;
            default:
                cout << "Invalid input. Try again." << endl;
                break;
        }
    }
    return true;
}

/*
Test for Lifo
*/
bool testLifo()
{
    int key = 1;
    vector<string> container;
    string item;

    while (key != 0)
    {
        key = getKey();
        switch (key)
        {
        case 0: //Quit
            break;
        case 1:
            item = getItem();
            lifoPush(container, item);
            break;
        case 2:
            item = lifoPop(container);
            break;
        default:
            cout << "Invalid input. Try again." << endl;
            break;
        }
    }
    return true;
}

int main()
{
    if (testFifo())
        cout << "Test Successful." << endl;
    if (testLifo())
        cout << "Test Successful." << endl;
    return 0;
}
