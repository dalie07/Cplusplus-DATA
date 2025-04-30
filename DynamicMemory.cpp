#include <iostream>
using namespace std;

int main()
{
    int numberofelements= 0;
    int *dynamicArray= nullptr;

    cout << "How many numbers would you like to enter? ";
    cin >> numberofelements;

    dynamicArray = new int[numberofelements];

    if (dynamicArray == nullptr)
    {
        cout << "Memory allocation failed!" << endl;
        return 1; // Exit if memory allocation fails
    }
    else
    {
        for (int i = 0; i < numberofelements; i++)
        {
            cout << "Enter number " <<": ";
            cin >> dynamicArray[i];
        }
        cout << "You entered: ";
        for (int j = 0; j< numberofelements; j++)
        {
            cout << dynamicArray[j] << ", ";
          
        }
        delete[] dynamicArray;
    }
    return 0;
}