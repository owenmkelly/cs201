//
//  tokenizertest.cpp
//  hw4
//
//  Created by owen on 4/01/21.
//

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include "tokenizer.hpp"

using std::cin;
using std::cout;
using std::vector;
using std::string;
using std::endl;
using std::getline;
using std::istringstream;


//Verifying user didn't input blank line.
bool ReadLine(string& input)
{
    if (input.length() == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

/*Reads the inputted string from user
and breaks them up into seperate tokens
returns amount of tokens*/
unsigned StringToTokensWS(string &input, vector<string> &tokens)
{
    istringstream instream(input);
    string word;
    int count = 0;
    while (instream >> word)
    {
        count++;
        tokens.push_back(word);
    }
    string blank = "";
    tokens.push_back(blank);
    return count;
}

//Checks if str is an identifier
bool IsLetters(string str)
{
    //Converts first char to upper case
    int firstchar = toupper(str[0]);
    //Checks if first case is A-Z or "_"
    if (firstchar > 'A' & firstchar < 'Z' || str[0] == '_')
    {
        for (int i = 0; i < str.size(); i++)
        {
            int uppercaseChar = toupper(str[i]); //Convert character to upper case version of character
            if (uppercaseChar >= 'A' && uppercaseChar <= 'Z') //If character is not A-Z
            {
                return true;
            }
        }
        return false;
    }
    return false;
}

//Checks if the string is all ints
//Returns true if it is an int
bool IsNumbers(string str)
{
    return str.find_first_not_of("0123456789") == std::string::npos;
}

//Checks token to verify literal type
void AnalyzeTokens(const vector<string>& tokens)
{
        for (auto analyze : tokens)
        {
            //Converts tokens to string
            istringstream identifier(analyze);
            string str;
            identifier >> str;

            //Whitespace (blank)
            if (analyze == "")
            {
                cout << "[whitespace] \t" << "\"" << "\"\n";
            }
            //String Literal
            else if ((str[0] == '\"') && (str.back() == '\"'))
            {
                cout << "[string] \t" << "\"\\" << str << "\\\"\"\n";
            }
            //Identifier
            else if (IsLetters(str))
            {
                cout << "[identifier] \t" << "\"" << str << "\"\n";
            }
            //Integer
            else if (IsNumbers(str))
            {
                cout << "[integer] \t" << "\"" << str << "\"\n";
            }
            //Unknown
            else
            {
                cout << "[unknown] \t" << "\"" << str << "\"\n";
            }

        }
}
