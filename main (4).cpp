#include<iostream>
using namespace std;

int main() {
    // Declare an integer array 'mynumbers' with a size of 5 and initialize it with values.
    int mynumbers[5] = { 10, 20, 30, 40, 50 };

    // Use the sizeof operator to determine the size (in bytes) of the 'mynumbers' array.
    // Note: sizeof returns the size in bytes, and the result is printed using cout.
    cout << "Size of mynumbers array: " << sizeof(mynumbers) << " bytes" << endl;

    // Use the sizeof operator to determine the size (in bytes) of an individual int element.
    // Note: sizeof returns the size in bytes, and the result is printed using cout.
    cout << "Size of int type: " << sizeof(int) << " bytes" << endl;

    // The program does not explicitly return a value, but implicitly returns 0 to indicate successful execution.
}
