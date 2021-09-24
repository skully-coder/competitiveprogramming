// program to generated well formed paranthesis
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<string> ans;
    vector<string> generateParenthesis(int n)
    {
        backtrack("", 0, 0, n);
        return ans;
    }

    void backtrack(string cur, int open, int close, int max)
    {
        if (cur.length() == max * 2)
        {

            ans.push_back(cur);
            return;
        }

        if (open < max)
        {
            backtrack(cur + "(", open + 1, close, max);
        }
        if (close < open)
        {
            backtrack(cur + ")", open, close + 1, max);
        }
    }
};

int main()
{
    Solution s;
    vector<string> ans = s.generateParenthesis(3);
    for (auto x : ans)
    {
        cout << x << endl;
    }
    return 0;
}
