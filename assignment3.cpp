#include <iostream>
using namespace std;


double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        cout << "Error: Division by zero!" << endl;
        return 0; 
    }
}

int modulo(int a, int b) {
    if (b != 0) {
        return a % b;
    } else {
        cout << "Error: Division by zero!" << endl;
        return 0; 
    }
}

int main() {
    double num1, num2;  
    char op;            
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter an operator (+, -, *, /, %): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;
    switch (op) {
        case '+':
            cout << "Result: " << add(num1, num2) << endl;
            break;
        case '-':
            cout << "Result: " << subtract(num1, num2) << endl;
            break;
        case '*':
            cout << "Result: " << multiply(num1, num2) << endl;
            break;
        case '/':
            cout << "Result: " << divide(num1, num2) << endl;
            break;
        case '%':
            cout << "Result: " << modulo(static_cast<int>(num1), static_cast<int>(num2)) << endl;
            break;
        default:
            cout << "Invalid operator!" << endl;
    }

    return 0;
}
