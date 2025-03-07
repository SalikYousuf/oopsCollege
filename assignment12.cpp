#include <iostream>
using namespace std;

int main() {
    char inputChar;

    
    cout << "Enter a single character: ";
    cin >> inputChar;

    
    switch (inputChar) {
        // Uppercase vowels
        case 'A': case 'E': case 'I': case 'O': case 'U':
            cout << "Uppercase vowel" << endl;
            break;

        
        case 'a': case 'e': case 'i': case 'o': case 'u':
            cout << "Lowercase vowel" << endl;
            break;

        
        case '0': case '1': case '2': case '3': case '4':
        case '5': case '6': case '7': case '8': case '9':
            cout << "Digit" << endl;
            break;

       
        default:
            if ((inputChar >= 'B' && inputChar <= 'Z') || (inputChar >= 'b' && inputChar <= 'z')) {
                cout << "Consonant" << endl;
            } else {
                cout << "Special character" << endl;
            }
    }
    return 0;
}