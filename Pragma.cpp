// C++ program to demonstrate the use of pragma preprocessor
// directive.
#include <iostream>
using namespace std;
#pragma once
// Defining PI to trigger a pragma message during
// compilation
#define PI 3.14
// to set aggressive optimization level
#pragma optimize("O3")
int main(){
#ifdef PI
#pragma message("YES! PI is defined.")
#endif
cout << "In main function!\n";
return 0;
}