#include<bits/stdc++.h>
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
class Solution
{  
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
        vector<int>v (n,0);
        stack<int>s1;
        s1.push(0);
        v[0] = 1;
        for(int i=1;i<n;i++)
        {
            while((!s1.empty()) && (price[s1.top()] <= price[i]))
               s1.pop();
            if(s1.empty())
              v[i] = i+1;
            else
              v[i] = i - s1.top(); 
            s1.push(i);
        }  
        return v;  
    }
};
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution obj;
		vector <int> s = obj.calculateSpan(a, n);
		for(i=0;i<n;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}