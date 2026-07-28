class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.size();
        string result = "";
        multiset<char> ans;

        for (int i = 0; i < n / 2; i++)
            ans.insert(s[i]);

        for (char c : ans)
            result += c;

        string out = result;
        reverse(result.begin(), result.end());

        if (n % 2)
            out += s[n / 2];

        out += result;
        return out;
    }
};
