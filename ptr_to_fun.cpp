#include <iostream>

using namespace std; 

int add(int x, int y)
{
    return x+y;
}

int sub(int x, int y)
{
    return x-y;
}

int main() {
    // int (*fptr)(int x, int y);

    // fptr = add;

    // cout<< fptr(5,4) <<endl;

    // fptr = sub;
    // cout<< fptr(7,3) <<endl;

    using ArithPtr = int (*)(int, int);

    ArithPtr fptr = add;

    cout<< fptr(4,3) <<endl;


    return 0;
}