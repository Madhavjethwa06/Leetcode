class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int>ans;
        int n=digits.size(),carry=0,sum;
        digits[n-1]+=1;
        for(int i=n-1;i>=0;i--){
            sum=carry+digits[i];
            
            ans.push_back(sum%10);
            carry=sum/10;
        }
        if(carry==1){
            ans.push_back(carry);
        } 
        reverse(ans.begin(),ans.end());   
        return ans;   
    }
};