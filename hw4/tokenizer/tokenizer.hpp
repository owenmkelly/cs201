//
//  tokenizer.hpp
//  hw4
//
//  Created by owen on 4/01/21.
//

#ifndef TOKENIZER_HPP_
#define TOKENIZER_HPP_

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

bool ReadLine(string& input);
unsigned StringToTokensWS(string& input, vector<string>& tokens);
void AnalyzeTokens(const vector<string>& tokens);
bool IsNumbers(string str);
bool IsLetters(string str);

#endif
