// Owen Kelly
// CS201
// Feb 8 2021

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

std::vector<std::string> names;
std::string name;
std::vector<int> scores;
int score;


void input(std::vector<std::string>& names, std::vector<int>& scores)
{
    std::cout << "Please enter a name and score.\n"
        << "To terminate input 'NoName 0'\n";
    while (std::cin >> name >> score && name != "NoName")
    {
        //Bool to ensure no duplicate entries
        bool valid = true;
        for (int i = 0; i < names.size(); i++)
        {
            if (names[i] == name)
            {
                valid = false;
            }
        }
        if (valid)
        {
            names.push_back(name);
            scores.push_back(score);
        }
        //Error for duplicates
        else
        {
            std::cout << "Duplicate name!\n";
        }

    }
}

//This will search for the name input by the user
void SearchNames(std::vector<std::string>& names, std::vector<int>& scores)
{
    std::string search;
    std::cout << "Enter a name to search: ";
    std::cin >> search;

    //searches for a match of their input within the vector names
    std::vector<std::string>::iterator it = std::find(names.begin(), names.end(), search);

    //This finds the corrasponding score to the name and prints it
    int z = it - names.begin();
    if (it != names.end())
    {
        std::cout << search << "'s score is: " << scores[z] << "\n";
    }
    else
    {
        std::cout << "Name not found.\n";
    }
        

}

//Same as function above but searches for scores and displays name instead.
void SearchScores(std::vector<std::string>& names, std::vector<int>& scores)
{
    int r = 0;
    std::cout << "Enter a score to search: ";
    std::cin >> r;

    std::vector<int>::iterator it = std::find(scores.begin(), scores.end(), r);

    int z = it - scores.begin();
    if (it != scores.end())
    {
        std::cout << "The names with scores that match what you inputted are: " << names[z] << "\n";
    }
    else
    {
        std::cout << "No corresponding name found. \n";
    }
}

//This will print the names back to the user
void PrintNames(std::vector<std::string>& names, std::vector<int>& scores)
{
    for (int i = 0; i < names.size(); ++i)
        std::cout << names[i] << " " << scores[i] << "\n";
}

int main()
{
    //Calls function for input
    input(names, scores);


    std::cout << " \n Select one of the following (type the integer and press 'Enter'). \n"
        << "1) Add names and scores \n"
        << "2) Print the names and scores\n"
        << "3) Search for a name\n"
        << "4) Search for a score\n";

    int x = 0;
    std::cin >> x;
    switch (x)
    {
    //Adds names and scores
    case 1:
        input(names, scores);
        break;
    //Prints names and scores
    case 2:
        PrintNames(names, scores);
        break;
    //Searches names and prints corresponding score
    case 3:
        SearchNames(names, scores);
        break;
    //Searches scores and prints corresponding scores
    case 4:
        SearchScores(names, scores);
        break;
    default:
        std::cout << "Improper entry. Displaying all names and scores. \n";
        PrintNames(names, scores);
    }

    return 0;
}
