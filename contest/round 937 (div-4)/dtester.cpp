#include <iostream>
#include <string>

using namespace std;

bool isBinaryDecimal(int n) {
    string n_str = to_string(n);
    int length = n_str.length();

    // Initialize a boolean array to store if the position is reachable
    bool dp[length + 1] = {false};
    dp[0] = true; // Base case

    // Iterate through all possible lengths of binary decimals
    for (int i = 1; i <= length; ++i) {
        // Check if the substring of length i ending at position i - 1 is a binary decimal
        if (n_str[i - 1] == '0' || n_str[i - 1] == '1') {
            int decimal = stoi(n_str.substr(0, i));
            if (decimal > 0 && decimal <= n && n % decimal == 0) {
                dp[i] = true;
            }
        }
    }

    return dp[length];
}

int main() {

    int t;
    cin>>t;

    while(t--){

    int n;
    //cout << "Enter a number: ";
    cin >> n;

    if (isBinaryDecimal(n)) {
        cout << n << " can be represented as a product of binary decimals." << endl;
        //cout<<"YES"<<endl;
    } else {
       //cout << n << " cannot be represented as a product of binary decimals." << endl;
        cout<<"NO"<<endl;
    }
}

    return 0;
}
