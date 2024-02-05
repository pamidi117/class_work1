#include<iostream>
using namespace std;

int main() {
    // Declare a 2D string array 'letters' with 2 rows and 4 columns, and initialize it with values.
    string letters[2][4] = { {"A", "B", "C", "D"}, {"E", "F", "G", "H"} };

    // Print the value located at the intersection of the 0th row and 2nd column in the 'letters' array.
    // Note: Array indices start from 0, so [0][2] corresponds to the 0th row and 2nd column.
    cout << letters[0][2];

    // The program does not explicitly return a value, but implicitly returns 0 to indicate successful execution.
}
