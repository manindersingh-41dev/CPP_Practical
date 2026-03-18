#include <iostream>

using namespace std; 

int main() {

    string name = "Ritesh";
    int a =  5;
    string* namePtr = &name;
    int* ptr;


    ptr = &a;

    // cout<< name <<endl;
    // cout<< namePtr <<endl;
    // cout<< *namePtr <<endl;

    // // Accessing address of variable
    // cout<< &name <<endl;

    cout<< *ptr <<endl;

    return 0;
}