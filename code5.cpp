#include<iostream>

using namespace std;

int main()
{
    /* code */
    float f = 34.4d;
    float g = 34.4f;
    cout<< "The size of float f is "<<sizeof(f)<<endl;
    cout<< "The value of f is "<<f<<endl<< "The value of g is "<<g<<endl;
    // Therefore float determines the value f can hold upto. so even if it is float f = 34.4l, then also the f will take up as float.

    return 0;
}
