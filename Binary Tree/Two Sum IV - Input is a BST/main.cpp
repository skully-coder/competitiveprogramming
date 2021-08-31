
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
    unordered_set<int> mp;
    bool findTarget(TreeNode *root, int k)
    {
        if (!root)
            return false;

        if (mp.find(k - root->val) != mp.end())
        {
            return true;
        }
        mp.insert(root->val);
        return findTarget(root->left, k) || findTarget(root->right, k);
        return false;
    }
};

int main()
{
    TreeNode *root = new TreeNode(5);
    root->left = new TreeNode(3);
    root->right = new TreeNode(6);
    root->left->left = new TreeNode(2);
    root->left->right = new TreeNode(4);
    root->right->left = new TreeNode(7);
    root->right->right = new TreeNode(8);
    Solution s;
    cout << s.findTarget(root, 9) << endl;
    return 0;
}
