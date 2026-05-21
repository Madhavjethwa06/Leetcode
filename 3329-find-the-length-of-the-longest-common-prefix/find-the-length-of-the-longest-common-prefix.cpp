class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {

        unordered_set<string> st;
        int ans = 0;

        // Store all prefixes from arr1
        for (int x : arr1) {
            string s = to_string(x);

            for (int j = 1; j <= s.size(); j++) {
                st.insert(s.substr(0, j));
            }
        }

        // Check prefixes from arr2
        for (int x : arr2) {
            string s = to_string(x);

            for (int j = 1; j <= s.size(); j++) {
                string prefix = s.substr(0, j);

                if (st.count(prefix)) {
                    ans = max(ans, j);
                }
            }
        }

        return ans;
    }
};