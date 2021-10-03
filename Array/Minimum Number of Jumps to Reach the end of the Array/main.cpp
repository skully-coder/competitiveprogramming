//Problem Link :  https://practice.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1
#include<bits/stdc++.h>
using namespace std;

// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
    
        int maxReach = arr[0];
        int jumps = 1;
        int steps = arr[0];
        if(n == 1){
            return 0;
        }
        if(arr[0] == 0){
           return -1;
        }
        for(int i=1;i<n;i++){
            maxReach = max(maxReach,i+arr[i]);
            steps--;
            if(i == n-1) {
                return jumps;
            }
            if(steps == 0){
                jumps++;
                if(i >= maxReach){
                    return -1;
                }
                steps = maxReach-i;
            }
        }
    }
};



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}