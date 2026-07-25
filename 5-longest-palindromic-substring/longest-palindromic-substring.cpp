class Solution {
public:
    bool isPalindrome(string &s, int l, int r) {
        while (l < r) {
            if (s[l] != s[r])
                return false;
            l++;
            r--;
        }
        return true;
    }

    string longestPalindrome(string s) {
        int n = s.size();
        string ans;

        for (int i = 0; i < n; i++) {
            for (int len = 1; len <= n - i; len++) {
                if (isPalindrome(s, i, i + len - 1) && len > ans.size()) {
                    ans = s.substr(i, len);
                }
            }
        }

        return ans;
    }
};