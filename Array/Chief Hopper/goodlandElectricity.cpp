#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int (i)=0;(i)<(int)(n);++(i))
#define rer(i,l,u) for(int (i)=(int)(l);(i)<=(int)(u);++(i))
#define reu(i,l,u) for(int (i)=(int)(l);(i)<(int)(u);++(i))
static const int INF = 0x3f3f3f3f; static const long long INFL = 0x3f3f3f3f3f3f3f3fLL;
typedef vector<int> vi; typedef pair<int, int> pii; typedef vector<pair<int, int> > vpii; typedef long long ll;
template<typename T, typename U> static void amin(T &x, U y) { if(y < x) x = y; }
template<typename T, typename U> static void amax(T &x, U y) { if(x < y) x = y; }

int main() {
	int n; int k;
	while(~scanf("%d%d", &n, &k)) {
		vector<int> a(n);
		for(int i = 0; i < n; ++ i)
			scanf("%d", &a[i]);
		vi v;
		rep(i, n) if(a[i] != 0)
			v.push_back(i);
		int j = 0;
		int ans = 0;
		for(int i = 0; i < n; ) {
			for(; j + 1 < (int)v.size() && v[j + 1] <= i + k - 1; ++ j);
			if(j == v.size() || i + k - 1 < v[j]) {
				ans = INF;
				break;
			}
			++ ans;
			i = v[j] + k;
			++ j;
		}
		printf("%d\n", ans == INF ? -1 : ans);
	}
	return 0;
}
