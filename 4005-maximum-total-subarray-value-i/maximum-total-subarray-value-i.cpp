class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
       long min1 = *std::min_element(nums.begin(), nums.end());

        long max1 = *std::max_element(nums.begin(),nums.end());
       long long answer = k * (max1 - min1);
        return answer;
    }
};