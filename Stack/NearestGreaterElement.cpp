// Author - Nishit Bansal, Nishit278 @ github
// solution of Nearest greater element using stacks 


#include <bits/stdc++.h>
#define ll long long int
#define FOR(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll arr[n];
        vector <ll> vec;
        FOR(i,n){
            cin>>arr[i];
        }
        //sort(arr, arr+n, greater <int>() );
        stack <ll> st;
        for(int i=n-1;i>=0;i--){
            if(st.size()==0){
                vec.push_back(-1);
                st.push(arr[i]);
                
            } else if(st.size()>0 && st.top()>arr[i]) {
                vec.push_back(st.top());
                st.push(arr[i]);
                
            } else if(st.size()>0 && st.top()<=arr[i]) {
                while(st.size()>0 && st.top()<=arr[i]){
                    st.pop();
                }
                // cout << st.top()<<endl;
                if(st.size()==0){
                    vec.push_back(-1);
                    st.push(arr[i]);

                } else {
                    vec.push_back(st.top());
                    st.push(arr[i]);
                }
            }
            
            // cout <<vec[n-i-1]<<" ";
            // cout <<vec[i]<<" ";
        }
        reverse(vec.begin(),vec.end());
        FOR(i,n){
            cout << vec[i]<<" ";
        }
    
        cout <<endl;
        return 0;

    }
}


