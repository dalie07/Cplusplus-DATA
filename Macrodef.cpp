#include <iostream>
using namespace std;

#define PI 3.14159
#define findsquare(x) (x * x)

int main()
{
   double radius=5.0;
   double area=PI * findsquare(radius);
   cout<<"Area of a circle: "<<area<<endl;
   return 0;
}