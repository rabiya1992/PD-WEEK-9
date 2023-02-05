#include <iostream>
#include <conio.h>
using namespace std;

main()
{
   string movieName;
   string movies[5] = {"Gladiator", "StarWars", "Terminator", "TakingLives", "TombRider"};

   cout << "Enter the movie name: ";
   cin >> movieName;

   float amount;

   for(int idx = 0; idx < 5; idx = idx + 1)
   {
      if(movieName == movies[1] || movieName == movies[3] )
      {
        amount = (500 - ((500 * 5) / 100));
      }
     
      if(movieName == movies[0] || movieName == movies[2] || movieName == movies[4] )
      {
        amount = (500 - ((500 * 10) / 100));
      }

    
   }
    
    
     cout << "The remaining amount after discount: " << amount;
    
}