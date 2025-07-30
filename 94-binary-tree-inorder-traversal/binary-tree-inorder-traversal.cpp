class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        inorder(root, ans);
        return ans;
    }

    void inorder(TreeNode* node, vector<int>& ans) {
        if (node == nullptr) return;

        inorder(node->left, ans);      // Visit left subtree
        ans.push_back(node->val);      // Visit current node
        inorder(node->right, ans);     // Visit right subtree
    }
};
