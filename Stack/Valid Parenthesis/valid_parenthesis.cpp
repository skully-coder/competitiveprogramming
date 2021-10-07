#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isParenthesisValid(string s)
    {
        stack<int> stk;

        for (auto ch : s)
        {
            if (ch == '(' or ch == '[' or ch == '{')
                stk.push(ch);

            if (ch == ')')
            {
                if (stk.empty())
                    return false;
                else
                {
                    if (stk.top() != '(')
                        return false;
                    else
                        stk.pop();
                }
            }

            if (ch == ']')
            {
                if (stk.empty())
                    return false;
                else
                {
                    if (stk.top() != '[')
                        return false;
                    else
                        stk.pop();
                }
            }

            if (ch == '}')
            {
                if (stk.empty())
                    return false;
                else
                {
                    if (stk.top() != '{')
                        return false;
                    else
                        stk.pop();
                }
            }
        }

        return stk.empty();
    }
};

int main()
{
    string s;
    cin >> s;
    Solution *obj = new Solution;
    bool valid = obj->isParenthesisValid(s);
    if (valid)
        cout << "Valid" << '\n';
    else
        cout << "Invalid" << '\n';
}