
#include <iostream>
#include <bits/stdc++.h>

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    int count = 0;
    void traversal(TreeNode *root, int maxval)
    {
        if (root)
        {
            if (root->val >= maxval)
            {
                maxval = root->val;
                count++;
            }
            traversal(root->left, maxval);
            traversal(root->right, maxval);
        }
        return;
    }
    int goodNodes(TreeNode *root)
    {
        if (root == NULL)
            return 0;
        traversal(root, root->val);
        return count;
    }
};
