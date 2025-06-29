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
    
    int count(TreeNode*ans){
        if(ans==NULL){
            return 0;
        }
        return 1+
        count(ans->left)+
        count(ans->right);
    }
    int countNodes(TreeNode* root) {
       
      return count(root); 
      
    }
};