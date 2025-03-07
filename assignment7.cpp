#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

   
    for (int x = 0; x <= sqrt(n); x++) {
        for (int y = 0; y <= sqrt(n); y++) {
            
            int sum = x * x + y * y;

            if (sum < n) {
                continue;
            }
            if (sum > n) {
                break;
            }

            cout << "Pair found: (" << x << ", " << y << ")\n";
        }
    }

    return 0;
}
