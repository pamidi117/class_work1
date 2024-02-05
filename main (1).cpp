#include<iostream>
using namespace std;

int main() {
    // Declare an array of strings named 'cars' and initialize it with values.
    string cars[] = { "Volvo", "BMW", "Ford", "Mazda" };

    // Change the value of the first element in the 'cars' array to "tata".
    cars[0] = "tata";

    // Use a for loop to iterate through the 'cars' array.
    // The loop runs from i=0 to i<5 (excluding 5).
    for (int i = 0; i < 5; i++) {
        // Print the index i and the corresponding value in the 'cars' array.
        cout << i << "=" << cars[i] << "\n";
    }

    // Print the value of the first element in the 'cars' array again.
    cout << cars[0];

    // Return 0 to indicate successful execution of the program.
    return 0;
}
