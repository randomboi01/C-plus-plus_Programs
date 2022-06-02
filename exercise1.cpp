#include <iostream>

using namespace std;

int main()
{
    // making table of some number lets say 6
    int num;
    cout<<"Choose the number whoose multiplication table you want"<<endl;
    cin>>num;
    for (int i = 1; i <= 10; i++)
    {
        cout<<num<<" x "<<i<<" = "<<num*i<<endl;
    }
    
    return 0;
}
