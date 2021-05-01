//
//  tokenizer.cpp
//  hw4
//
//  Created by owen on 4/01/21.
//

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <vector>
using std::vector;
#include <string>
using std::string;
using std::getline;
#include <sstream>
using std::istringstream;
#include "tokenizer.hpp"


int main()
{
    string str;
    string input;
    vector<string> tokens;

    cout << "Please type in some text. When you are done type \"End\", \"end\" or \"END\":\n";

    //Takes user input, until typing a form of end.
    while (getline(cin, input) && input != "end" && input != "End" && input != "END")
    {
        //As long as user input isn't blank add it to input vector.
        if (ReadLine(input))
        {
            StringToTokensWS(input, tokens);
        }
    }

    //Also pushes back their "end" to the vector
    tokens.push_back(input);

    //Analyzes tokens (see tokenizertest.cpp)
    AnalyzeTokens(tokens);


    return 0;
}
