#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll unsigned long long
#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)
#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
int rng(int lim) {
	uniform_int_distribution<int> uid(0,lim-1);
	return uid(rang);
}
int mpow(int base, int exp); 
void ipgraph(int n, int m);
void dfs(int u, int par);


const int N = 3e5, M = N;
//=======================

//vi g[N];
//int a[N];
ll mulMod(ll a, ll b, ll  mod)
  {
     ll x=0,y=a%mod;
     while(b>0)
     {
         if(b%2==1)
          x= (x+y)%mod;

          y= (y*2LL)%mod;
          b/=2;  
     }

    return (x%mod);

  }
  
ll binPower(ll a, ll n, ll c)
{
    
    ll res=1;
    while(n)
    {
        if(n & 1)
          res= (res*a)%c;

        n>>=1;
       a= (a*a)%c;

    }

    return res%c;
}


bool checkComposite(ll a , ll n , int s, ll d)
{
     ll x = binPower(a,d,n);
     if(x == 1 || x == n-1)
         return false;

     for(int i=1;i<s;i++)  
       {
           x = (x*x)%n;
           if(x== n-1)
                return false;
       }  
    return true;
}


bool isPrime(ll n)
{
   if(n<2)
    return false;

   ll d=n-1;
   int s=0;
    while((d & 1)==0)
           {
               d>>=1;
               s++;
           }

    for(ll a : {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37})
    {
         if(n==a)
           return true;
       
         if(checkComposite(a,n,s,d))  
           return false;
    }
    return true;

}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    ll t = 1;
    cin >> t;
    while(t--) {
      
      ll n;
      cin >> n;
      if(isPrime(n))
        cout << "YES" << "\n";
      else
        cout << "NO" << "\n";


    }

    return 0;
}

