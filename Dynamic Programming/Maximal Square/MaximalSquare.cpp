#include <bits/stdc++.h>

using namespace std;

int maximalSquare(vector<vector<int>> &matrix)
{

    int x = matrix.size();
    int y = matrix[0].size();

    vector<vector<int>> dp(x, vector<int>(y, 0));

    int ans = 0;

    for (int i = x - 1; i >= 0; i--)
    {
        for (int j = y - 1; j >= 0; j--)
        {
            if (i != x - 1 && j != y - 1 && matrix[i][j] != 0)
            {
                dp[i][j] = matrix[i][j] + min(dp[i + 1][j + 1], min(dp[i + 1][j], dp[i][j + 1]));
            }
            else if (matrix[i][j] != 0)
            {
                dp[i][j] = matrix[i][j];
            }
            ans = max(ans, dp[i][j]);
        }
    }
    return ans * ans;
}

int main()
{
    int n;
    int m;
    cin >> n >> m;

    vector<vector<int>> matrix(n, vector<int>(m, 0));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int ans = maximalSquare(matrix);
    cout << "Area of Maximal Square\n";
    cout << ans << "\n";
}