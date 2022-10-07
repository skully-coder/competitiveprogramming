#include <bits/stdc++.h>
using namespace std;

int minDistance(string A, string B) {
    int n = A.size(),m=B.size();
    
    int dp[n][m];
    
    for(int i=0;i<n;i++){
        bool exist = false;
        for(int j=0;j<=i;j++) if(A[j]==B[0]) exist = true;
        
        if(exist) dp[i][0] = i;
        else dp[i][0] = i+1;
    }
    
    for(int i=0;i<m;i++){
        bool exist = false;
        for(int j=0;j<=i;j++) if(A[0]==B[j]) exist = true;
        
        if(exist) dp[0][i] = i;
        else dp[0][i] = i+1;
    }
    
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(A[i]==B[j]) dp[i][j] = dp[i-1][j-1];
            else{
                dp[i][j] = 1+min(dp[i][j-1],min(dp[i-1][j],dp[i-1][j-1]));
            }
        }
    }
    
    return dp[n-1][m-1];
    
}

signed main()
{
    string A,B;
    cin>>A>>B;
    cout<<minDistance(A,B);

    return 0;
}