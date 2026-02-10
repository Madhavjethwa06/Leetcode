class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        vector<int>neg;
        vector<int>pos;
        for(int i=0;i<n;i++){
            if(nums[i]<0) neg.push_back(nums[i]);
            else pos.push_back(nums[i]);
        }
        reverse(neg.begin(),neg.end());
        int m=neg.size(),r=pos.size(),s=0,t=0;
        for(int i=0;i<m;i++){
            neg[i]*=neg[i];
        }
        for(int i=0;i<r;i++){
            pos[i]*=pos[i];
        }
        while(s<m && t<r){
            if(neg[s]<pos[t]){
                ans.push_back(neg[s]);
                s++;
            }else{
                ans.push_back(pos[t]);
                t++;
            }
        }
        while (s < m) {
    ans.push_back(neg[s]);
    s++;
}

while (t < r) {
    ans.push_back(pos[t]);
    t++;
}

        return ans;
    }
};