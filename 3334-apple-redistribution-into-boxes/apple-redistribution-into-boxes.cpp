class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int ans=0,app=0,cap=0;
        for(int i=0;i<apple.size();i++){
            app+=apple[i];
        }
        sort(capacity.begin(),capacity.end());
        for(int i=capacity.size()-1;i>=0;i--){
            if(cap<app){
                cap+=capacity[i];
                ans++;
            }
        }
        return ans;
    }
};