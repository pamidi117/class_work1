#include<iostream>
using namespace std;

int main() {
    // Declare a string array 'cars' with a size of 5 and initialize it with values.
    string cars[5] = { "volvo", "toyota", "ford", "tesla", "honda" };

    // Calculate the number of elements in the 'cars' array using sizeof and divide by the size of a single string.
    int n = sizeof(cars) / sizeof(string);

    // Use a for loop to iterate through each element of the 'cars' array.
    // The loop runs from i=0 to i<n.
    for (int i = 0; i < n; i++) {
        // Print the current element of the 'cars' array followed by a newline.
        cout << cars[i] << "\n";
    }

    // The program does not explicitly return a value, but implicitly returns 0 to indicate successful execution.
}
