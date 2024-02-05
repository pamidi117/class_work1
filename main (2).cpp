
#include <iostream>
using namespace std;

int main() {
    // Declare an integer array 'mynumbers' with a size of 5 and initialize it with values.
    int mynumbers[5] = { 10, 20, 30, 40, 50 };

    // Use a range-based for loop to iterate over each element of 'mynumbers'.
    // This loop assigns each element to the variable 'i' in each iteration.
    for (int i : mynumbers) {
        // Print the current element of 'mynumbers'.
        cout << i << "\n";
    }

    // Return 0 to indicate successful execution of the program.
    return 0;
}
