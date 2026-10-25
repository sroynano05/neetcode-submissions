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
    vector<int>vp,vq;
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==nullptr&&q==nullptr) return true;
        fill_up(p,vp);
        fill_up(q,vq);
        if(vp==vq) return true;
        return false;
    }
    void fill_up(TreeNode* root,vector<int>&v){
        if(root==nullptr) {
            v.push_back(-101);
            return;
        }
        v.push_back(root->val);
        fill_up(root->left,v);
        fill_up(root->right,v);
    }
};
