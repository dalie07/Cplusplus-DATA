#include <iostream>
using namespace std;

int main()
{
    int a=21;
    int c;

    c = a;
    cout << "= Operator,Value of c is : " << c << endl;

    c += a;
    cout << "+= Operator,Value of c is : " << c << endl;
    c -= a;
    cout << "-= Operator,Value of c is : " << c << endl;
    c *= a;
    cout << "*= Operator,Value of c is : " << c << endl;
    c /= a;
    cout << "/= Operator,Value of c is : " << c << endl;
    c %= a;
    cout << "%= Operator,Value of c is : " << c << endl;
    c &= a;
    cout << "&= Operator,Value of c is : " << c << endl;
    c |= a;
    cout << "|= Operator,Value of c is : " << c << endl;
    c ^= a;
    cout << "^= Operator,Value of c is : " << c << endl;

    return 0;
}