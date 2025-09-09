class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int ans=0;
        for(char s: stones){
            for(char j: jewels){
                if(j==s) {ans++;}
            }
        }
        return ans;
    }
    
};