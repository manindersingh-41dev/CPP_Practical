#include <iostream>

using namespace std;

void change_vals(int* x)
{
    cout<< *x <<endl;
    *x=*x+5;
    cout<< *x <<endl;
}


int main()
{
    int x = 2;
    change_vals(&x);
    cout<<"main fn: "<< x <<endl;

    return 0;
}