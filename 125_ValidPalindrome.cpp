#include "LeetcodeHelpers.h"

bool isNotAlphanumeric(char c) { return !iswalnum(c); }

class Solution {
public:
    bool isPalindrome(string s) {

        s.erase(remove_if(s.begin(), s.end(), isNotAlphanumeric), s.end());

        int strlen = s.length();
        for (int i = 0 ; i < strlen/2; i++) {
            if (tolower(s.at(i)) != tolower(s.at(strlen-1-i))) { return false; }
        }

        return true;

    }
};

MAIN {

    Solution s;
    cout << s.isPalindrome("A man, a plan, a canal: Panama") << endl;

}