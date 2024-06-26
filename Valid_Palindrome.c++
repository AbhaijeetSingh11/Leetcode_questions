#include <iostream>
#include <string>
#include <cctype>  // for isalnum and tolower

using namespace std;

bool isPalindrome(string s) {
    int left = 0, right = s.size() - 1;

    // Efficiently convert characters to lowercase and skip non-alphanumeric characters
    while (left < right) {
        while (left < right && !isalnum(s[left])) {
            left++;
        }
        while (left < right && !isalnum(s[right])) {
            right--;
        }

        if (tolower(s[left]) != tolower(s[right])) {
            return false;
        }

        left++;
        right--;
    }

    return true;
}

int main() {
    string s = "A man, a plan, a canal: Panama"; // Test string

    if (isPalindrome(s)) {
        cout << s << " is a palindrome." << endl;
    } else {
        cout << s << " is not a palindrome." << endl;
    }

    return 0;
}
