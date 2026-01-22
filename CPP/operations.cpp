#include <iostream>
using namespace std;

// function for addition
int add(int a, int b) {
    return a + b;
}

// function for subtraction
int sub(int a, int b) {
    return a - b;
}

// function for multiplication
int mul(int a, int b) {
    return a * b;
}

// left shift operator
int leftShift(int a) {
    return a << 1;   // multiply by 2
}

// right shift operator
int rightShift(int a) {
    return a >> 5;   // divide by 2
}

int main() {
    int x = 1024, y = 5;

    cout << "Addition: " << add(x, y) << endl;
    cout << "Subtraction: " << sub(x, y) << endl;
    cout << "Multiplication: " << mul(x, y) << endl;
    cout << "Left Shift: " << leftShift(x) << endl;
    cout << "Right Shift: " << rightShift(x) << endl;

    return 0;
}
