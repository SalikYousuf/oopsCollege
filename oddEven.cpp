#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    (n % 2 == 0) ? cout << "Number is even" : cout << "Number is odd";
    return 0;
}