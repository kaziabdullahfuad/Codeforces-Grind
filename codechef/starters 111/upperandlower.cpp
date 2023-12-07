#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string inputString;

    // islower(c) and isupper(c) function
    // time and space complexity for both is constant O(1)
    // Get user input
    cout << "Enter a string: "<<endl;
    getline(cin, inputString);
    cout<<"String is: "<<inputString<<endl;
    // Check each character in the string
    for (char c : inputString) {
        if (islower(c)) {
            cout << c << " is a lowercase letter." << endl;
        } else if (isupper(c)) {
            cout << c << " is an uppercase letter." << endl;
        } else {
            cout << c << " is neither uppercase nor lowercase." << endl;
        }
    }

    return 0;
}
