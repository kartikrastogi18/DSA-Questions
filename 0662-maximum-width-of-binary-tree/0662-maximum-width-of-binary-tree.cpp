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
    int widthOfBinaryTree(TreeNode* root) {
      queue<pair<TreeNode*,unsigned long long >>q;
      q.push({root,0});
      int mxwid=0;
      while(q.size()>0){
        int currsize=q.size();
        unsigned long long stIdx=q.front().second;
        unsigned long long enIdx=q.back().second;
        mxwid=max(mxwid,(int)(enIdx-stIdx+1));
      for(int i=0;i<currsize;i++){
        auto curr=q.front();
        q.pop();
        if(curr.first->left){
            q.push({curr.first->left,curr.second*2+1});
        }
        if(curr.first->right){
            q.push({curr.first->right,curr.second*2+2});
             }
         }
      } 
        return mxwid;
    }
};