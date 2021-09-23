#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int fib(int n)
    {
        vector<int> F(50);
        F[0] = 0;
        F[1] = 1;
        if (n == 0)
            return 0;
        if (n == 1)
            return 1;
        for (int i = 2; i <= n; i++)
        {
            F[i] = F[i - 1] + F[i - 2];
        }
        return F[n];
    }
};

int main()
{
    Solution s;
    cout << s.fib(5) << endl;
    return 0;
}
