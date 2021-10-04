#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod 1000000009
int MAXN = 100001;
int prime[100001];

int main() {
	for(int i=0;i<MAXN;i++)
	    prime[i] = 0;
	for(int i=2;i<MAXN;i++){
	    if(prime[i] == 0){
	        for(int j=i;j<MAXN;j+=i)
	            prime[j]++;
	    }
	}
	int t;
	cin>>t;
	while(t--){
        int a,b,k;
        cin>>a>>b>>k;
        // cout<<prime[n]<<endl;
        int cnt = 0;
        for(int i=a;i<=b;i++){
            if(prime[i] == k)
                cnt++;
        }
        cout<<cnt<<endl;
	}
	return 0;
}
