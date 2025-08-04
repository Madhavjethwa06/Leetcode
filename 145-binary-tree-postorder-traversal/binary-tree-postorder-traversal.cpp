/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        
        vector<int>output;
        postorder(root,output);
        return output;
        
    }
     
    void postorder(TreeNode* tp,vector<int>& arr){
        if(tp!=nullptr){
        
        postorder(tp->left,arr);
        postorder(tp->right,arr);
        arr.push_back(tp->val);
        }
    }
    
};