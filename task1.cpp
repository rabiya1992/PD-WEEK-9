#include <iostream>
#include <conio.h>
using namespace std;

main()
{
  int size;

  cout << "Enter required size: ";
  cin >> size;

  string fruit[size];
  int quantity[size];
  int price[size];

  int sum = 0;
  int calculation;

  for(int idx = 0; idx < size; idx = idx + 1)
  {
    cout << "Enter the name of fruit: ";
    cin >> fruit[idx];
    cout << endl;
  }

  for(int idx = 0; idx < size; idx = idx + 1)
  {
    cout << "Enter the price of fruit: ";
    cin >> price[idx];
    cout << endl;
  }

  for(int idx = 0; idx < size; idx = idx + 1)
  {
    cout << "Enter the quantity of fruit: ";
    cin >> quantity[idx];
    cout << endl;
  }
 
  for(int idx = 0; idx < size; idx = idx + 1)
  {
    calculation = price[idx] * quantity[idx];
    sum = sum + calculation;
  }

  cout << "The total price of fruits: " << sum;
}