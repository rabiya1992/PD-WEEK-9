#include <iostream>
using namespace std;

string danceConvert(string pin);

main()
{
    string pin;
    cout << "Enter your pin: ";
    cin >> pin;
   
    cout << danceConvert( pin);
    
}


string danceConvert(string pin)
{
   string MOVES[] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado", "Pop","Lock", "Arabesque"};

   string output = "";
   bool valid = true;
   for(int i = 0; i < 4; i = i + 1)
   {
      int assci = pin[i];
      int number = assci - 48;

      if(assci < 48 || assci > 57)
      {
        valid = false;
        break;
      }

      int pickUpIndex = number + i;

      if(pickUpIndex >= 10) pickUpIndex = pickUpIndex - 10;
        output = output + MOVES[pickUpIndex]+", ";

   }

   if(valid)
      return output;
   
   else
    return "Invalid output";


}