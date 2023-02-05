#include <iostream>
using namespace std;

main()
{ 
    int size;
    cout << "Enter number for array: " ;
    cin >> size;
    int total;
    int addition;
    int count = 0;
    string arr[size];

    for(int idx = 0; idx <= size - 1; idx = idx + 1)
    {
        cout << "Enter the color: ";
        cin >> arr[idx];
    }

    total = (size * 2) + (size - 1);

    for(int idx = 0; idx <= size - 1; idx = idx + 1)
    {
        addition = idx + 1;

        if(arr[idx] == arr[addition])
        {
            count = count + 1;
        }
    }

    cout << total - count;

    
}