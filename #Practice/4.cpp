#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number <= 1) {
        cout << "Not Prime" << endl;
        return 0;
    }

    bool isPrime = true;

    for (int i = 2; i <= sqrt(number); i++) {
        if (number % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
        cout << "Prime" << endl;
    else
        cout << "Not Prime" << endl;

    return 0;
}
