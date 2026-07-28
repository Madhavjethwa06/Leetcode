class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.size();

        multiset<char> st;
        for (int i = 0; i < n / 2; i++)
            st.insert(s[i]);

        string first = "";
        for (char c : st)
            first += c;

        string second = first;
        reverse(second.begin(), second.end());

        if (n % 2)
            return first + s[n / 2] + second;

        return first + second;
    }
};