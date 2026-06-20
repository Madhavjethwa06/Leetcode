class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        int ans=0;
        vector<bool> covered(101, false);
        for(int i=0;i<nums.size();i++){
            for(int j=nums[i][0];j<=nums[i][1];j++){
                covered[j]=true;
            }
        }
        return count(covered.begin(),covered.end(),true);
    }
};