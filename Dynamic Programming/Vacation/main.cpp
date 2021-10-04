#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define all(v)          v.begin(),v.end()
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define rep(i,a,b)      for(int i=a;i<b;i++)
#define mem1(a)			memset(a,-1,sizeof(a))
#define mem0(a)			memset(a,0,sizeof(a))
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());

template<typename T, typename T1>T amax(T &a, T1 b) {if (b > a)a = b; return a;}
template<typename T, typename T1>T amin(T &a, T1 b) {if (b < a)a = b; return a;}
template<typename T>
using pbds = tree<T , null_type , less<T> , rb_tree_tag , tree_order_statistics_node_update>;
const int N = 1e5 + 5;

void solve() {
	int n; cin >> n;
	vi a(n), b(n), c(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i] >> b[i] >> c[i];
	}

	vector<vector<int>>dp(n, vi(3));
  // dp[i][0] - maximum happiness upto considering first i days(0 indexed) such that on ith day Taro do swmming
  // dp[i][1] - maximum happiness upto considering first i days(0 indexed) such that on ith day Taro catch bugs in mountains
  // dp[i][2] - maximum happiness upto considering first i days(0 indexed) such that on ith day Taro do homework

  // Base Case on first day Taro can do anything
	dp[0][0] = a[0];
	dp[0][1] = b[0];
	dp[0][2] = c[0];

	for (int i = 1; i < n; i++) {
    // transitions 
    // Taro can do swmming if Taro have done any of the other activity previous day
		dp[i][0] = max(dp[i - 1][1] + a[i], dp[i - 1][2] + a[i]);
    // Taro can catch bugs in mountain if Taro have done any of the other activity previous day
		dp[i][1] = max(dp[i - 1][0] + b[i], dp[i - 1][2] + b[i]);
    // Taro can do homework if Taro have done any of the other activity previous day
		dp[i][2] = max(dp[i - 1][1] + c[i], dp[i - 1][0] + c[i]);
	}

	cout << max({dp[n - 1][0], dp[n - 1][1], dp[n - 1][2]}) << endl;


}


int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#ifdef SEIVE
	seive();
#endif
#ifdef NCR
	init();
#endif
	int t = 1;
	// cin >> t;
	while (t--) solve();
	return 0;

}