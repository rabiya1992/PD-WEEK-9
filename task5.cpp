#include <iostream>
using namespace std;

main()
{
   string word[4];

   for(int idx = 0; idx < 4; idx = idx + 1)
   {
      cout << "Enter a word: ";
      cin >> word[idx];

   }

   if(word[0] == word[1] && word[0] == word[2] && word[0] == word[3])
   {
     cout << "True";
   }

   else
   {
     cout << "False";
   }
    
}