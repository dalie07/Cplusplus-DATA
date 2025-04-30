#include <iostream>
using namespace std;

int main()
{

    int firstvalue;
    int secondvalue;

    int *Ppointer=nullptr;

    Ppointer = &firstvalue;
    *Ppointer = 10;

    Ppointer = &secondvalue;
    *Ppointer = 20;
    cout << "First value: " << firstvalue << endl;
    cout << "Second value: " << secondvalue << endl;
    return 0;
}