/*Question #5:
write a program to swap the value of a and b
let  a=10 and b = 20
your output should be
a = 20 and b = 10
*/

#include <iostream>
using namespace std;

int main() {
    // Declaring variables a and b
    int a = 10;
    int b = 20;

    // First of all prints original values
    cout << "Before swapping: a = " << a << ", b = " << b << endl;

    // Swap the values
    int temp = a; // Store the value of a in a temporary variable
    a = b;        // Assign the value of b to a
    b = temp;     // Assign the value of the temporary variable to b

    // Display swapped values
    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0;
}


