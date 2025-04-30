#include <iostream>
using namespace std;

#define MAX_VALUE 100

int main()
{
    cout<<"MAX_VALUE IS: "<<MAX_VALUE<<endl;  

    #undef MAX_VALUE
    #define MAX_VALUE 200
    cout<<"MAX_VALUE IS: "<<MAX_VALUE<<endl;
    return 0;
}