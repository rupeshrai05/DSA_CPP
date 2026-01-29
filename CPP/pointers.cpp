// CPP program to illustrate pointers- its declaration, initialization and usage

#include "bits/stdc++.h"
using namespace std;
void add (int *a, int *b){
    int sum = *a + *b; //dereferencing pointer to get value
    cout<<"Sum using pointers: "<<sum<<endl;
}

int main() {
    int var = 20;   // actual variable declaration.
    int *ptr;      // pointer variable
    string s = "Hello, Pointer.";

    ptr = &var;    // store address of var in pointer variable
    string *s_ptr = &s; // pointer to string
    cout << "Value of var: " << var << endl;
    cout << "Address of var: " << &var << endl;
    cout << "Value stored in ptr (Address of var): " << ptr << endl;
    cout << "Value pointed to by ptr: " << *ptr << endl;
    //push_back function - two ways of using pointer to access member function
    s_ptr->push_back('!');
    (*s_ptr).push_back('!');
    cout << "String after push_back using pointer: " << *s_ptr << endl;
    //dynamic memory allocation using new operator 
    int *i_ptr =new int(30);//we treat this like function call which returns the address of newly allocated memory
    cout<<"Value at dynamically allocated memory: "<<*i_ptr<<endl;//dereferencing pointer to get value.

    //pasing value bby pointers - by using function add.
    int a = 10, b = 15;
    add(&a, &b); //passing address of a and b


    return 0;
}