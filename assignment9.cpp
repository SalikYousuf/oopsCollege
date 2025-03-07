#include <iostream>
using namespace std;

int fact(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fact(n - 1); 
    }
}

int Lcm(int a, int b) {
    int lcm = max(a, b);
    while (true) {
        if (lcm % a == 0 && lcm % b == 0) {
            return lcm;
        }
        ++lcm;
    }
}

int Gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b, choice;

    cout << "Choose an option: \n";
    cout << "1. Calculate LCM\n";
    cout << "2. Calculate GCD\n";
    cout << "3. Calculate Factorial\n"; // Corrected menu numbering
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
    case 1: 
        cout << "Enter the first number: ";
        cin >> a;
        cout << "Enter the second number: ";
        cin >> b;
        cout << "The LCM of " << a << " and " << b << " is " << Lcm(a, b) << endl;
        break;

    case 2: 
        cout << "Enter the first number: ";
        cin >> a;
        cout << "Enter the second number: ";
        cin >> b;
        cout << "The GCD of " << a << " and " << b << " is " << Gcd(a, b) << endl;
        break;

    case 3: 
        cout << "Enter a number: ";
        cin >> a;
        cout << "The factorial of " << a << " is " << fact(a) << endl;
        break;

    default:
        cout << "Invalid choice. Please enter 1, 2, or 3.\n"; // Updated error message
        break;
    }

    return 0;
}
