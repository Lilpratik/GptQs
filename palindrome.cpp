#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool isPalindrome(string str) {
    //remove spaces and convert to lowercase
    string normalized;
    for (char ch : str) {
        if (isalnum(ch)) {  // only and alphanumeric characters
        normalized += tolower(ch); // convert to lowercase
    }
}

//Reverser the string
string reversed = normalized;
reverse(reversed.begin(), reversed.end());

// check if the string is equal to its reverse
return normalized == reversed;

}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin , str);

    if (isPalindrome(str)) {
        cout << "Yes, it is a palindrome." << endl;
    } else {
        cout << "No, it is not a palindrome." << endl;
    }
    return 0;
}
