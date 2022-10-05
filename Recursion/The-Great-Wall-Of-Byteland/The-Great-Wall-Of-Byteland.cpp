#include<bits/stdc++.h>
using namespace  std;
typedef long long ll;
ll mod =1000000007;


vector<vector<ll>> multi(vector<vector<ll>>&a,vector<vector<ll>>&b)

{

    vector<vector<ll>>temp(3,vector<ll>(3));

    for(int i=0;i<3;i++)

    {

        for(int j=0;j<3;j++)

        {
            for(int k=0;k<3;k++)
            {
                temp[i][j]=(temp[i][j]+(a[i][k]*b[k][j])%mod)%mod;
            }
        }
    }

    return temp;

}

vector<vector<ll>> pow(vector<vector<ll>> mat ,int k)

{

   vector<vector<ll>>temp(3,vector<ll>(3,0));

   temp[0][0]=1;
   temp[1][1]=1;
   temp[2][2]=1;



   while(k>0)

   {
       if(k%2==0)

       {
            mat=multi(mat,mat);
            k=k/2;
       }

       else

       {
           temp=multi(temp,mat);
           k--;
       }
   }

   return temp;

}

int main()

{

    int t;
    cin>>t;
    while(t--)
    {

       ll n;
       cin>>n;

       vector<vector<ll>>mat(3,vector<ll>(3));

       mat[0][0]=1;
       mat[0][1]=4;
       mat[0][2]=2;
       mat[1][0]=1;
       mat[1][1]=0;
       mat[1][2]=0;
       mat[2][0]=0;
       mat[2][1]=1;
       mat[2][2]=0;

       vector<vector<ll>>res=pow(mat,n);

       cout<<(res[0][0])%mod<<"\n";

    }

}

