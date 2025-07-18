#include <iostream>
#include <cmath>
using namespace std;

// Function to check if a number is Armstrong
bool isArmstrong(int num) {
    int original = num;
    int sum = 0;
    int digits = 0;

    // Count digits
    int temp = num;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    // Sum of digits raised to the power 'digits'
    temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return sum == original;
}

int main() {
    int low, high;
    cout << "Enter the lower range: ";
    cin >> low;
    cout << "Enter the upper range: ";
    cin >> high;

    cout << "Armstrong numbers between " << low << " and " << high << " are:\n";
    for (int i = low; i <= high; i++) {
        if (isArmstrong(i)) {
            cout << i << " ";
        }
    }

    return 0;
}
