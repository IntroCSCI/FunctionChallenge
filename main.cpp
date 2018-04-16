#include <iostream>
#include <vector>
#include <string>

using namespace std;

//prototypes...
/*
void displaySort(double,double);
bool isEvenNumber(string);
bool isSameFirstAndLast(string,string);
void changeCase(char&);
*/
void printVector(const vector<char> &);
void replaceWithLetter( vector<char> &, char );
int main()
{
    vector<char> alphabet;

    alphabet.push_back('a');
    alphabet.push_back('b');
    alphabet.push_back('c');

    printVector(alphabet);

    cout<<"\nChange the alphabet...\n";

    replaceWithLetter( alphabet, '!' );

    printVector(alphabet);

    cout<<endl;

   return 0;
}

//function definitions...
void printVector(const vector<char> &list)
{
    for(int i=0; i<list.size(); i++)
    {
        cout<<list[i];
    }
}

void replaceWithLetter( vector<char> &word, char letter)
{
    for(int i=0; i<word.size(); i++)
    {
        word[i] = letter;
    }
}






