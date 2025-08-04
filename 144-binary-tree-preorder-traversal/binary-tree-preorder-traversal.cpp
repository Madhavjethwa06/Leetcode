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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>output;
        preorder(root,output);
        return output;
        
    }
     
    void preorder(TreeNode* tp,vector<int>& arr){
        if(tp!=nullptr){
        arr.push_back(tp->val);
        preorder(tp->left,arr);
        preorder(tp->right,arr);
        }
    }
};