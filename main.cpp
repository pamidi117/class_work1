#include <iostream>
using namespace std;

int main() {
    // Declare a string array 'cars' with a size of 4 and initialize it with car brands.
    string cars[4] = { "volvo", "BMW", "Tesla", "Ford" };

    // Use a for loop to iterate through each element of the 'cars' array.
    // The loop runs from i=0 to i<4.
    for (int i; i < 4; i++) {
        // Print the current element of the 'cars' array followed by a comma and a newline.
        cout << cars[i] << ",\n";
    }

    // Return 0 to indicate successful execution of the program.
    return 0;
}
