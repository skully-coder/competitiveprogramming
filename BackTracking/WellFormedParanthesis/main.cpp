// program to generated well formed paranthesis
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<string> generateParenthesis(int n)
{
    vector<string> ans;
    if (n == 0)
    {
        ans.push_back("");
    }
    else
    {
        for (int c = 0; c < n; ++c)
            for (auto left : generateParenthesis(c))
                for (auto right : generateParenthesis(n - 1 - c))
                    ans.push_back("(" + left + ")" + right);
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<string> ans = generateParenthesis(n);
    for (auto x : ans)
        cout << x << endl;
    return 0;
}

