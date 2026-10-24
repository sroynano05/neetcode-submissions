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
    TreeNode* invertTree(TreeNode* root) {
        if (root==nullptr ) return root;
            invert (root);
            return root;
    }
    void invert(TreeNode* root){
        if (root==nullptr) return;
        swap(root->left,root->right); // I swaping pointer with built-in function
        invert(root->left);
        invert(root->right);
    }

};
