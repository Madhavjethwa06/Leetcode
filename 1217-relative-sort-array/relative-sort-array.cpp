class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {

        unordered_map<int,int> freq;

        // Count frequencies
        for (int num : arr1)
            freq[num]++;

        vector<int> ans;

        // Add numbers in arr2 order
        for (int num : arr2) {
            while (freq[num] > 0) {
                ans.push_back(num);
                freq[num]--;
            }
        }

        // Collect leftovers
        vector<int> remaining;

        for (auto &p : freq) {
            while (p.second > 0) {
                remaining.push_back(p.first);
                p.second--;
            }
        }

        // Sort leftovers
        sort(remaining.begin(), remaining.end());

        // Append leftovers
        ans.insert(ans.end(), remaining.begin(), remaining.end());

        return ans;
    }
};