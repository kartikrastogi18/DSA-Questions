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
    void postorder(TreeNode*r,vector<int>&ans){
        if(r==NULL){
            return;
        }
        postorder(r->left,ans);
        postorder(r->right,ans);
        ans.push_back(r->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
      vector<int>ans;
        postorder(root,ans);
        return ans;
    }
};