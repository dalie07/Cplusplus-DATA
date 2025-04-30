// C++ program to demonstrates the use of #if, #elif, #else,
// and #endif preprocessor directives.
#include <iostream>
using namespace std;
// defining PI
#define PI 3.14159
int main(){
#if defined(PI)
cout << "PI is defined" << endl;
#elif defined(SQUARE)
cout << "PI is not defined" << endl;
#else
#error "Neither PI nor SQUARE is defined"
#endif
return 0;
}