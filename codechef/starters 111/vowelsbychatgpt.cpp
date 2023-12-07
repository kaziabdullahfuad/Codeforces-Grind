#include <iostream>
#include <cctype>
using namespace std;

bool isVowel(char c) {
    // Convert the character to lowercase before checking
    c = std::tolower(c);

    // Check if the character is a vowel
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
    string inputString;

    // Get user input
    cout << "Enter a string: ";
    getline(cin, inputString);

    // Check each character in the string
    for (char c : inputString) {
        if (isVowel(c)) {
            cout << c << " is a vowel." << endl;
        } else {
            cout << c << " is not a vowel." << endl;
        }
    }

    return 0;
}
