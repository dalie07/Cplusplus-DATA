#include <iostream>
using namespace std;

int main()
{

    double a = 21.09399;
    float b = 10.20;
    int c;

    c= (int) a; // explicit conversion
    cout << "a = " << a << endl;
    c= (int) b; // explicit conversion
    cout << "b = " << b << endl;
    return 0;
}