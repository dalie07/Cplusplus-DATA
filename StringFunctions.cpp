#include <iostream>
#include <cstring>

using namespace std;
int main()
{
    char str1[10]="hello";
    char str2[10]="world";
    char str3[10];
    int len;

    strcpy(str3, str1); // Copy str1 to str3
    cout << "str3: " << str3 << endl;
    strcat(str1, str2); // Concatenate str2 to str3
    cout << "str1: " << str1 << endl;
    len = strlen(str1); // Get length of str1
    cout << "Length of str1: " << len << endl;
    return 0;
}