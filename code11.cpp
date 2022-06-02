#include <iostream>

using namespace std;

int main()
{
    int a = 3;
    int* b = &a;
    int** c = &b;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<"The value of a is "<<a<<" or "<<**c<<endl;
    cout<<"The value of address of (address of a) "<<c<<endl;

    return 0;
}