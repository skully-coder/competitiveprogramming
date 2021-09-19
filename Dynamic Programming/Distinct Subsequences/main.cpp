#include <iostream>
#include <bits/stdc++.h>

using namespace std;
class Solution
{
public:
    int numDistinct(string s, string t)
    {
        int ns = s.length();
        int nt = t.length();
        vector<vector<unsigned long long>> dp(nt + 1, vector<unsigned long long>(ns + 1, 0));
        dp[0][0] = 1;
        for (int i = 0; i < nt + 1; i++)
        {
            for (int j = 1; j < ns + 1; j++)
            {
                dp[i][j] = dp[i][j - 1];
                for (int k = 1; k < nt + 1; k++)
                {
                    if (i == k && s[j - 1] == t[k - 1])
                        dp[i][j] = (dp[i][j] + dp[i - 1][j - 1]);
                }
            }
        }
        for (int i = 0; i < nt + 1; i++)
        {
            for (int j = 0; j < ns + 1; j++)
            {
                cout << dp[i][j] << " ";
            }
            cout << endl;
        }
        return dp[nt][ns];
    }
};

int main()
{
    string s = "babgbag";
    string t = "bag";
    Solution sln;
    cout << sln.numDistinct(s, t) << endl;
    return 0;
}
