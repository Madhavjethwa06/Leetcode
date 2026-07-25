class Solution {
public:
    int maxProduct(int n) {
        vector<int>ans;
       
        while(n>0){
           ans.push_back(n % 10);
            n /= 10;
        }
        sort(ans.begin(),ans.end());
        int p=ans.size();
        return ans[p-1]*ans[p-2];
    }
};