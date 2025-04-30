#include <iostream>
 using namespace std;

 int main()
 {
    int *Ppointer=nullptr;
    int integervar=5;

    Ppointer=&integervar;

    cout<<"The value of integervar is: "<<integervar<<endl;
    cout<<"The address of integervar is: "<<&integervar<<endl;
    cout<<"The value of Ppointer is: "<<Ppointer<<endl;
    cout<<"The address of Ppointer is: "<<&Ppointer<<endl;

    return 0;
 }