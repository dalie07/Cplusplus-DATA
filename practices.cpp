#include <iostream>
using namespace std;
 int globalSum = 0;

 int updateGlobalSum(int localSum)
 {
     globalSum = localSum;
     return globalSum;
 }
 int calculateArea()
 {
   const int  Length = 7;
   const int  Width = 8;
    int area = Length * Width;
    return area;
 }
 int main()
 {
    int x, y;
    cout << " please enter the first number"<< endl;
    cin >> x;
    if (cin.fail()) {
        cout << "Invalid input. Please enter a number." << endl;
        return 1;
    }
    cout << " please enter the second number"<< endl;
    cin >> y;
    if (cin.fail()) {
        cout << "Invalid input. Please enter a number." << endl;
        return 1;
    }

    int localSum;
    localSum = x + y;
    cout << "The sum of the two numbers is: " << localSum << endl;

    int calcArea = calculateArea();
    cout << "The area of the rectangle is: " << calcArea << endl;
    int updatedSum = updateGlobalSum(localSum);
    cout << "The updated global sum is: " << updatedSum << endl;
 }