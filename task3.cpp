#include <iostream>
using namespace std;

string calculation(string word);

main()
{
    string word;
    string answer;
    cout << "Enter a word: ";
    getline(cin, word);

    answer = calculation(word);
    cout << answer;

    
}


string calculation(string word)
{
    string check;
    int x = 0;
    while(word[x] != 0)
    {
        x = x + 1;
    }

    if(x % 2 == 0)
    {
        check = "true";
    }

    else
    {
        check = "false";
    }

    return check;
}