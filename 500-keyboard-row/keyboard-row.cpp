class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string row1 = "qwertyuiop";
        string row2 = "asdfghjkl";
        string row3 = "zxcvbnm";

        // make sets for quick lookup
        unordered_set<char> s1(row1.begin(), row1.end());
        unordered_set<char> s2(row2.begin(), row2.end());
        unordered_set<char> s3(row3.begin(), row3.end());

        vector<string> ans;

        for (string w : words) {
            string lower = w;
            transform(lower.begin(), lower.end(), lower.begin(), ::tolower);

            // check which row first char belongs to
            unordered_set<char>* ref;
            if (s1.count(lower[0])) ref = &s1;
            else if (s2.count(lower[0])) ref = &s2;
            else ref = &s3;

            bool ok = true;
            for (char c : lower) {
                if (!ref->count(c)) {
                    ok = false;
                    break;
                }
            }
            if (ok) ans.push_back(w);
        }

        return ans;
    }
};
