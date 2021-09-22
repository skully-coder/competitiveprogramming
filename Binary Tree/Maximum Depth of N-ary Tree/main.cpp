#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int val;
    vector<Node *> children;

    Node() {}

    Node(int _val)
    {
        val = _val;
    }

    Node(int _val, vector<Node *> _children)
    {
        val = _val;
        children = _children;
    }
};

class Solution
{
public:
    int maxDepth(Node *root)
    {
        if (root == NULL)
            return 0;
        int max_depth = 0;
        for (int i = 0; i < root->children.size(); i++)
        {
            max_depth = max(max_depth, maxDepth(root->children[i]));
        }
        return 1 + max_depth;
    }
};

int main()
{
    Solution s;
    Node *root = new Node(1);
    root->children.push_back(new Node(3));
    root->children.push_back(new Node(2));
    root->children.push_back(new Node(4));
    root->children[0]->children.push_back(new Node(5));
    root->children[0]->children.push_back(new Node(6));
    root->children[2]->children.push_back(new Node(7));
    root->children[2]->children.push_back(new Node(8));
    cout << s.maxDepth(root);
    return 0;
}
