#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    double a, b, c;

    
    cout << "Enter coefficient a (non-zero): ";
    cin >> a;
    cout << "Enter coefficient b: ";
    cin >> b;
    cout << "Enter coefficient c: ";
    cin >> c;

    
    string errorMessage = (a == 0) ? "Error: 'a' must be non-zero for a quadratic equation." : "";

    if (!errorMessage.empty()) {
        cout << errorMessage << endl;
    } else {
        
        double discriminant = b * b - 4 * a * c;

        
        if (discriminant > 0) {
            cout << "The roots are real and distinct." << endl;
            double root1 = (-b + sqrt(discriminant)) / (2 * a);
            double root2 = (-b - sqrt(discriminant)) / (2 * a);
            cout << "Root 1: " << root1 << endl;
            cout << "Root 2: " << root2 << endl;
        } else if (discriminant == 0) {
            cout << "The roots are real and equal." << endl;
            double root = -b / (2 * a);
            cout << "Root: " << root << endl;
        } else {
            cout << "The roots are imaginary." << endl;
            double realPart = -b / (2 * a);
double imaginaryPart = sqrt(-discriminant) / (2 * a);
            cout << "Root 1: " << realPart << " + " << imaginaryPart << "i" << endl;
            cout << "Root 2: " << realPart << " - " << imaginaryPart << "i" << endl;
        }
    }

    return 0;
}