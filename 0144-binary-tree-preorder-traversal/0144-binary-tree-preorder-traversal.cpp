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
    void preorder(TreeNode* r,  vector<int>&a){
        if(r==NULL){
            return ;
        }
        a.push_back(r->val);
        preorder(r->left,a);
        preorder(r->right,a);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> a;
        preorder(root,a);
        return a;
    }
};