class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int i = 0; i < n; i++) {
    for(int j = i + 1; j < n; j++) {
        swap(matrix[i][j], matrix[j][i]);
    }
}

        for (int i = 0; i < n; ++i) {
        // Use two pointers to reverse the current row in-place
        int left = 0;
        int right = n - 1; // Since it's an NxN array, n is also the number of columns

        while (left < right) {
            // Swap the elements at the left and right pointers
            swap(matrix[i][left], matrix[i][right]);

            // Move the pointers inward
            left++;
            right--;
        }
    }
           
    
        

    }
};