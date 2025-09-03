class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string>ans;
        if (nums.empty()) return ans;
        int m=nums[0],n=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]==1+nums[i-1]){
                n=nums[i];
            }else{
                if (m == n) ans.push_back(to_string(m));
                else{
                ans.push_back(to_string(m) + "->" + to_string(n));
                
            }
            m = n = nums[i];
            }
        }
         if (m == n) ans.push_back(to_string(m));
        else ans.push_back(to_string(m) + "->" + to_string(n));
        return ans;
    }
};