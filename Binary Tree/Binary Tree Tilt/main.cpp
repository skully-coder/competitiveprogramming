
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

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
    int totalTilt = 0;

    int findTilt(TreeNode *root)
    {
        totalTilt = 0;
        valueSum(root);
        return totalTilt;
    }

    int valueSum(TreeNode *root)
    {
        if (root == NULL)
            return 0;

        int lSum = valueSum(root->left);
        int rSum = valueSum(root->right);
        int tilt = abs(lSum - rSum);
        totalTilt += tilt;

        return root->val + lSum + rSum;
    }
};

int main()
{
    Solution s;
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    cout << s.findTilt(root) << endl;
    return 0;
}
