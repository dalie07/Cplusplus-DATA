#include <iostream>
#include <string>

using namespace std;

int main()
{

    string str1 = "Hello";
    string str2 = "World";
    string str3;
    int len;

    str3= str1;
    cout << "str3 = str1: " << str3 << endl;

    str3 = str1 + str2;
    cout << "str3 = str1 + str2: " << str3 << endl;

    len = str3.length();
    cout << "Length of str3: " << len << endl;
    
    return 0;
}