#include <iostream>

using namespace std; 

int main() {
    
    int arr[] = {13,21,34,24,5};
    int* ptr = arr;  //&arr[0]


    cout<< *ptr <<endl;
    cout<< *(ptr+1) <<endl;
    cout<< *(ptr+2) <<endl;
    cout<< *(ptr+3) <<endl;
    cout<< *(ptr+4) <<endl;
    cout<< *(ptr+5) <<endl;

    ptr = ptr+1;
    cout<< *ptr<<endl;
    cout<< *(ptr-1) <<endl;
    return 0;
}