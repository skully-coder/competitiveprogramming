#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cout<<"enter n: ";
    cin>>n;
    cout<<"enter k: ";
    cin>>k;
    int t[n+1][k+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=k;j++)
        {
            if (j == 0 || j == i)
		t[i][j] = 1;
	else
	           t[i][j] = t[i - 1][j - 1] + t[i - 1][j];

        }
    }
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=k;j++)
        {
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"answer is : "<<t[n][k];
}
