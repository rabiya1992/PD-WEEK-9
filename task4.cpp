#include <iostream>
using namespace std;

main()
{
    int size;
    cout << "Enter the size of array: ";
    cin >> size;

    int digit[size];
    bool seven;

    for(int idx = 0; idx < size; idx = idx + 1)
    {
        cout << "Enter the numbers: ";
        cin >> digit[idx];
    }

    for(int idx = 0; idx < size; idx = idx + 1)
    {
        if(digit[idx] % 10 == 7)
        {
            seven = true;
        }
    }

    if(seven == true)
    {
        cout << "Boom!";

    }

    else
    {
        cout << "There is no 7 digit in the array.";
    }
    
}