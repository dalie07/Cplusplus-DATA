#include <iostream>
using namespace std;

int main()
{
    int a=5;
    int b=20;
    int c;

    if(a && b)
    {
        cout << "Condition is true" << endl;
    }
    if(a || b)
    {
        cout << "Condition is true" << endl;
    }

    a=0;
    b=10;
    if(a && b)
    {
        cout << "Condition is true" << endl;
    }
    else
    {
        cout << "Condition is false" << endl;
    }
    if(!(a && b))
    {
        cout << "Condition is true" << endl;
    }
    return 0;
}