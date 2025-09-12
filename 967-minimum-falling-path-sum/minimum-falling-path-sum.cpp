class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        
        vector<int> prev = matrix[0]; 
        
        for(int i = 1; i < n; i++) {
            vector<int> curr(n, 0);
            for(int j = 0; j < n; j++) {
                int up = prev[j];                       
                int leftDiag = (j > 0) ? prev[j-1] : 1e9;   
                int rightDiag = (j < n-1) ? prev[j+1] : 1e9; 
                
                curr[j] = matrix[i][j] + min({up, leftDiag, rightDiag});
            }
            prev = curr; 
        }
        
        return *min_element(prev.begin(), prev.end());
    }
};