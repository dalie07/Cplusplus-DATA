// C++ program to demonstrate the use of #warning
// preprocessor directive.
#include <iostream>
using namespace std;
// not defining it to trigger the warning
//#define PI 3.14
#ifndef PI
#warning "PI is not defined!"
#endif
int main(){
cout << "Hello World" << endl;
return 0;
}