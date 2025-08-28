class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0, right = numbers.size() - 1;

        while (left < right) {
            int sum = numbers[left] + numbers[right];

            if (sum == target) {
                // +1 because the problem wants 1-based indices
                return {left + 1, right + 1};
            }
            else if (sum < target) {
                left++;   // need a bigger sum → move left forward
            }
            else {
                right--;  // need a smaller sum → move right backward
            }
        }
        return {};
    }
};
