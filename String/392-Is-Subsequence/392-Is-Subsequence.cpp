class Solution {
    int isSubSequence(string& s1, string& s2, int i, int j , vector<vector<int>> &dp)
    {
        if (i == 0 || j == 0) {
            return 0;
        }
        if (dp[i][j] != -1) {
            return dp[i][j];
        }
        if (s1[i - 1] == s2[j - 1]) {
            return dp[i][j] = 1 + isSubSequence(s1, s2, i - 1, j - 1,dp);
        }
        else {
            return dp[i][j] = isSubSequence(s1, s2, i, j - 1,dp);
        }
    }
 
public:
    bool isSubsequence(string s, string t) {
        int m = s.size();
        int n = t.size();
        if (m > n) {
            return false;
        }
        vector<vector<int>> dp(m+1,vector<int> (n+1,-1));
        if (isSubSequence(s, t, m, n,dp) == m) {
            return true;
        }
        else {
            return false;
        }
    }
};