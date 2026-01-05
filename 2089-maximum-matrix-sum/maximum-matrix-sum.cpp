class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long ans=0;
        int neg=0;
        int minabs=INT_MAX;
        int n=matrix.size();

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] < 0) neg++;
                minabs = min(minabs, abs(matrix[i][j]));
                ans += abs(matrix[i][j]);
            }
        }

        if(neg%2!=0){
            ans-=2*minabs;
        }

        return ans;
    }
};