class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if (!root) return true;
        return isMirror(root->left, root->right);
    }

    bool isMirror(TreeNode* left, TreeNode* right) {
        if (!left && !right) return true;  // Both null → symmetric
        if (!left || !right) return false; // Only one is null → not symmetric
        if (left->val != right->val) return false; // Values don't match

        // Check if left->left matches right->right AND left->right matches right->left
        return isMirror(left->left, right->right) &&
               isMirror(left->right, right->left);
    }
};
