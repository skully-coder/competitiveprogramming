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
                if(st.size()==0){
                    vec.push_back(-1);
                    st.push(arr[i]);

                } else {
                    vec.push_back(st.top());
                    st.push(arr[i]);
                }
            }
            
           
        }
        reverse(vec.begin(),vec.end());
        FOR(i,n){
            cout << vec[i]<<" ";
        }
    
        cout <<endl;
        return 0;

    }
}
