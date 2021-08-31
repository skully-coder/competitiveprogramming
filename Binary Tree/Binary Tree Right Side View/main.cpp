
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
    vector<int> rightSideView(TreeNode *root)
    {
        vector<int> ans;
        if (root == NULL)
            return ans;
        queue<TreeNode *> qq;
        qq.push(root);
        while (qq.size() > 0)
        {
            int si = qq.size();
            vector<int> temp;
            for (int i = 0; i < si; i++)
            {
                auto it = qq.front();
                temp.push_back(it->val);
                qq.pop();
                if (it->left != NULL)
                {
                    qq.push(it->left);
                }
                if (it->right != NULL)
                {
                    qq.push(it->right);
                }
            }
            ans.push_back(temp[temp.size() - 1]);
        }
        return ans;
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

    vector<int> ans = s.rightSideView(root);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}
