//
//  bulls-and-cows.cpp
//  hw4
//
//  Created by owen on 4/9/21.
//

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <string>
using std::string;
using std::getline;
#include <vector>
using std::vector;
#include <sstream>
using std::istringstream;

#include <algorithm>
using std::random_shuffle;
#include <chrono>

int main()
{
    //String containing only numbers 0-9
    string numbs = "0123456789";
    
    //Ensures random_shuffle will be different
    srand(unsigned(time(NULL)));
    //Shuffles answer
    random_shuffle(numbs.begin(), numbs.end());
    //Changes answer to correct size (4)
    string answer = numbs;
    answer.resize(4);

    //Startup message
    cout << "Lets play a game!" << endl
        << "Guess a integer 4 characters long (i.e. \"1234\")." << endl
        << "Please keep in mind there will be no repeated numbers. (i.e. \"1122\")." << endl
        << "If you guess a correct number in the right location it is a \"bull\"." << endl
        << "If it is the correct number in the wrong location is a \"cow\"." << endl
        << "Good luck! To give up enter \"end\"" << endl;

    //Guess input
    string guess;
    cout << "Your guess: ";
    while (getline(cin, guess) && guess != "end" && guess != "End" && guess != "END")
    {
        istringstream instream(guess);
        int num;
        instream >> num;
        
        //Verifying their guess is a 4 digit int
        if (!instream || guess.length() != 4)
        {
            cout << "Improper guess. Try again.\n"
                << "Your guess: ";
        }
        else
        {
            int bulls = 0;
            int cows = 0;

            //Finds "bulls"
            for (int i = 0; i != answer.length(); i++)
            {
                int pos = answer.find(guess[i]);//crash
                //if position and number is correct add a bull
                if (pos == i)
                {
                    ++bulls;
                }
                //If number is correct but not position add a cow
                else if (pos != string::npos)
                {
                    ++cows;
                }

            }
            cout << bulls << " bulls and " << cows << " cows!\n";


            //If they guessed the correct number
            if (bulls == answer.length())
            {
                cout << "Congrats! You won!\n";
                break;
            }
        }
    }
    //If user quits
    if (guess == "end" || guess == "End" || guess == "END")
    {
        cout << "You gave up. You lose. The answer was " << answer << ".\n"
            << "Better luck next time! \n";
    }


    return 0;
}
