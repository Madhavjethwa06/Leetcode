class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for (int i = 0; i < numRows; i++) {
            vector<int> temp(i + 1, 1);  // initialize with 1s

            // Fill in the middle elements
            for (int j = 1; j < i; j++) {
                temp[j] = ans[i - 1][j - 1] + ans[i - 1][j];
            }

            ans.push_back(temp);  // Add the row to the result
        }
        return ans;
    }
};
