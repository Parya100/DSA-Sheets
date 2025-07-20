#include <iostream>
using namespace std;

int main() {
    int num, count = 0;

    // Input number
    cout << "Enter a number: ";
    cin >> num;

    // Handle case when number is 0
    if (num == 0) {
        count = 1;
    } else {
        // Make number positive if it's negative
        if (num < 0) {
            num = -num;
        }

        // Count digits
        while (num != 0) {
            num = num / 10;
            count++;
        }
    }

    // Output result
    cout << "Number of digits: " << count << endl;

    return 0;
}
