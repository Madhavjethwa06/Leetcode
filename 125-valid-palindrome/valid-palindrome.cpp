class Solution {
public:
    bool isPalindrome(string s) {
        string cleaned = "";

        // Step 1: Clean the string (keep only alphanumeric & convert to lowercase)
        for (char c : s) {
            if (isalnum(c)) {
                cleaned += tolower(c);
            }
        }

        // Step 2: Check if cleaned string is a palindrome
        int left = 0, right = cleaned.length() - 1;
        while (left < right) {
            if (cleaned[left] != cleaned[right]) {
                return false;
            }
            ++left;
            --right;
        }

        return true;
    }
};
