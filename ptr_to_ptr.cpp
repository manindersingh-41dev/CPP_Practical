#include <iostream>

using namespace std; 

int main() {
    
    int a = 5;
    int* ptr = &a;
    int** pptr = &ptr;

    cout<<a<<endl;
    cout<< ptr<<"\t"<<*ptr <<endl;
    cout<< pptr<<"\t"<<*pptr<<"\t"<<**pptr <<endl;

    return 0;
}