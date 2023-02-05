#include <iostream>
using namespace std;

main()
{
  string name1;
  string name2;

  cout << "Enter first string: ";
  cin >> name1;
   cout << "Enter second string: ";
  cin >> name2;

  int counter = 0;

  for (int x = 0; x < name1.length(); x = x + 1)
  {
     for(int y = 0; y < name2.length(); y = y + 1)
     {
        if(name1[x] == name2[y])
        {
            counter = counter + 1;
            name2[y] = ' ';
            break;
        }
     }
  }

  cout << counter;   
}