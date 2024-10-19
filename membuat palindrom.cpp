#include <iostream>
#include <string>

using namespace std;

void main() {
    string kata;
    cout << "Check Kata" << endl;
    cout << "Input Kata: ";
    cin >> kata;
    cout << "hasil : ";

    int n = kata.length();
    bool isPalindrome = true;

    for (int i = 0; i < n / 2; i++) {
        if (kata[i] != kata[n - i - 1]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }


}

