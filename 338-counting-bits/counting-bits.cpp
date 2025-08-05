class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans;
        for(int i=0;i<=n;i++){
            long count=0;
            long num=i;
            while(num){
                if(num%2==1)count++;
                num/=2;
            }
            ans.push_back(count);
        }
        return ans;
    }
};