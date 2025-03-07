#include <iostream>
#include <cmath> 

using namespace std;
double magnitude(double real, double imaginary) {
    return sqrt(real * real + imaginary * imaginary);
}

int main() {
    double real1, imag1, real2, imag2;

    // Input for the first complex number
    cout << "Enter the real part of the first complex number: ";
    cin >> real1;
    cout << "Enter the imaginary part of the first complex number: ";
    cin >> imag1;

    // Input for the second complex number
    cout << "Enter the real part of the second complex number: ";
    cin >> real2;
    cout << "Enter the imaginary part of the second complex number: ";
    cin >> imag2;

    // Calculate magnitudes
    double magnitude1 = magnitude(real1, imag1);
    double magnitude2 = magnitude(real2, imag2);

    // Compare magnitudes and print the result
    if (magnitude1 > magnitude2) {
        cout << "The first complex number has a higher magnitude." << endl;
    } else if (magnitude1 < magnitude2) {
        cout << "The second complex number has a higher magnitude." << endl;
    } else {
        cout << "Equal" << endl;
    }
    return 0;
}