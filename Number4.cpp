#include <iostream>
#include <string>
#include <set>
#include <sstream>
using namespace std;

int main()
{   int num;
    std::set<string>  censor;
    string  sentence;
    string  temp;
    string  word;
    
    cout << "Enter <num> <censored words> <sentence>" << endl;
    cin >> num;
    //  Build the list of censored words
    for (int i=0; i<num; i++)
    {   cin >> temp;
        censor.insert (temp);
    }
    
    getline (cin, sentence);
    stringstream ss(sentence);
    while (ss >> word)
    {   if (censor.find (word) == censor.end())    
        {   //  word not found in censored list
            cout << word << " ";
        }
        else
        {   //  word found in censored list
            cout << "*** ";
        }
    }
    cout << endl;
    system ("pause");
    return 0;
}