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
    array<vector<TreeNode*>, 22> memo;
    vector<TreeNode*> allPossibleFBT(int n) {
      if(n == 1){
        TreeNode* root = new TreeNode(0);
        return {root};
      }
      vector<TreeNode*> ans;
      if(n%2){
        for(int i=1; i<n; i+=2){
          vector<TreeNode*> ltree;
          vector<TreeNode*> rtree;
          if(memo[i].size())
            ltree = memo[i];
          else
            ltree = allPossibleFBT(i);
          if(memo[n-i-1].size())
            rtree = memo[n-i-1];
          else
            rtree = allPossibleFBT(n-i-1);
          for(auto lt:ltree){
            for(auto rt:rtree){
              TreeNode* root = new TreeNode(0);
              root->left = lt;
              root->right = rt;
              ans.push_back(root);
            }
          }
        }
        memo[n] = ans;
        return ans;
      }
      return {};
    }
};