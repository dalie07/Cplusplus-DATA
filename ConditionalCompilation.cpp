// C++ program to demonstrate the use of #ifdef and #ifndef
// preprocessor directives.
#include <iostream>
using namespace std;
#define DEBUG
#define PI 3.14

int main(){
// to check if DEBUG is defined
#ifdef DEBUG
cout << "Debug mode is ON" << endl;
#else
cout << "Debug mode is OFF" << endl;
#endif
// to check if PI is defined
#ifndef PI
cout << "PI is not defined" << endl;
#else
cout << "PI is defined" << endl;
#endif
return 0;
}