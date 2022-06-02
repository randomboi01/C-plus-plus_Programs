#include <iostream>

using namespace std;

int main()
{
    int marks[] = {90, 91, 92, 93};
    int i= 0;
    /*while (i<4)
    {
        cout<<"The value of marks at "<<i<<" is "<<marks[i]<<endl;
        i++;
    }
    i = 0;

    do
    {
        cout<<"The value of marks at "<<i<<" is "<<marks[i]<<endl;
        i++;
    } while (i<4);*/
    cout<<sizeof(marks[0])<<endl;
    
    return 0;
}