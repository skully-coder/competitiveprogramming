#include <bits/stdc++.h>

#define int             long long
#define endl 			'\n'
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;
int32_t main(){
	FIO;
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	int dp[n];
	dp[0] = 1;
	for(int i = 1; i < n; i++){
		dp[i] = 1;
		for(int j = 0; j < i; j++){
			if(a[i] > a[j] && dp[i] < dp[j]+1) 
				dp[i] = dp[j]+1;
		}
	}
	cout << *max_element(dp, dp+n) << endl;
	return 0;
}
