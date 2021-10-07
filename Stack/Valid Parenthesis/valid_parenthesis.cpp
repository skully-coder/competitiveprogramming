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

            else {
                if(stk.empty() or (stk.top() == '(' and ch != ')') or (stk.top() == '[' and ch != ']') or (stk.top() == '{' and ch != '}')) return false;
                stk.pop();
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