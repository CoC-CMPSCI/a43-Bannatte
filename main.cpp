#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    int smallest;

    // Read exactly three integers from standard input
    if (!(cin >> num1 >> num2 >> num3)) return 1;  // exit if reading fails

    smallest = num1;
    if (num2 < smallest) smallest = num2;
    if (num3 < smallest) smallest = num3;

    // Output exactly as expected
    cout << "The smallest number is  " << smallest << endl;

    return 0;
}
