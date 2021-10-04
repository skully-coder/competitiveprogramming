#include <bits/stdc++.h>
using namespace std;
long long getMaxArea(long long arr[], long long n)
    {
        vector <long long> left(n),right(n);
        long long ans=0;
        left[0]=0;
        right[0]=0;
        stack<int> s;
        s.push(0);
        for(int i=1;i<n;i++)
        {
            while(!s.empty() && arr[s.top()]>=arr[i])
               s.pop();
            if(s.empty())
               left[i]=0;
            else   
               left[i]=s.top()+1;
            s.push(i);
        }
        while(!s.empty())
            s.pop();
        for(int i=n-1;i>=0;i--)
        {
            if(s.empty())
               right[i]=n-1;
            while(!s.empty() && arr[s.top()]>=arr[i])
               s.pop();
            if(s.empty())
               right[i]=n-1;
            else
               right[i]=s.top()-1;
            s.push(i);   
        }
        for(int i=0;i<n;i++)
        {
            long long width=right[i]-(left[i]-1);
            ans=max(ans,arr[i]*width);
        }
        return ans;
    }
int main()
{
   long long n;
   cin>>n;
   long long arr[n];
   for(long long i=0;i<n;i++)
      cin>>arr[i];
   
   cout<<getMaxArea(arr,n)<<endl;;
   return 0;
}
