#include <iostream>
using namespace std;

main()
{
  int numbers[3];
  int counter;

  for(int idx = 0;  idx < 3; idx = idx + 1)
{
    cout << "Enter the number: ";
    cin >> numbers[idx];

}
    
cout << "Number of times odd-even transformation needs to be done: ";
cin >> counter;

   for(int idx = 0; idx < 3; idx = idx + 1)
   {
      if(numbers[idx] % 2 == 0)
      {
        for(int x = 0; x < counter; x = x + 1)
        {
          numbers[idx] = numbers[idx] - 2;
        }
      }

      else
      {
        for(int x = 0; x < counter; x = x + 1)
        {
            numbers[idx] = numbers[idx] + 2;
        }

      }

      cout << numbers[idx] << " ";

   }

}