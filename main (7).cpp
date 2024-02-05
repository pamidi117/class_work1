#include<iostream>
using namespace std;

int main() {
    // Declare a 3D string array 'letters' with dimensions 2x2x2, and initialize it with values.
    string letters[2][2][2] = {
        {{"A", "B"}, {"C", "D"}},
        {{"E", "F"}, {"G", "H"}}
    };

    // Use nested loops to iterate through each element of the 3D 'letters' array.
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                // Print the current element of the 'letters' array followed by a newline.
                cout << letters[i][j][k] << "\n";
            }
        }
    }

    // Return 0 to indicate successful execution of the program.
    return 0;
}
