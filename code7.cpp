#include <iostream>

using namespace std;

int main()
{
    int age;
    cout << "Tell me your age." << endl;
    cin >> age;
    /*if ((age >= 18) && (age <= 90))
    {
        cout<<"You are eligible to drink"<<endl;
    }
    else
    {
        cout<<"You are not eligible to drink"<<endl;
    }*/

    switch (age)
    {
    case 18 ... 90:
        cout << "You are eligible to drink";
        break;

    default:
        cout << "No special cases";
        break;
    }

    return 0;
}
