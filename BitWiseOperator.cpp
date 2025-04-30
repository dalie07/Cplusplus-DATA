#include <iostream>
using namespace std;

int main()
{
    unsigned int a = 16;
    unsigned int b = 30;
    int c;

    c= a & b; // bitwise AND
    cout << "the value of c: " << c << endl;

    c= a | b; // bitwise OR
    cout << "the value of c: " << c << endl;
    c= a ^ b; // bitwise XOR
    cout << "the value of c: " << c << endl;
    c= ~a; // bitwise NOT
    cout << "the value of c: " << c << endl;
    c= a << 2; // left shift    
    cout << "the value of c: " << c << endl;
    c= a >> 2; // right shift
    cout << "the value of c: " << c << endl;

    return 0;
}