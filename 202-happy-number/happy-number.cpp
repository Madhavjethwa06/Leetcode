class Solution {
public:
    bool isHappy(int n) {
        if(n==1)return true;
         vector<int>a;
        while(n!=1){
           a.push_back(n);
            int sum=0;
            while(n){
                sum+=pow(n%10,2);
                n/=10;
            }
            n=sum;
            
            

            for(int i=0;i<a.size();i++){
                for(int j=i+1;j<a.size();j++){
                    if(a[i]==a[j] && a[j]!=1){ return false;}
                }
            }
        }
        return true;
    }
};