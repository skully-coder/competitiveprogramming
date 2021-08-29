// program to find maximum profit in job scheduling
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        int n = startTime.size();
        
        // create jobs array with index value
        vector<int>jobs(n);
        for(int i=0;i<n;i++)jobs[i]=i;
        
        // sort jobs array based on the endTime array so that we get a sorted array index of endTime
        sort(jobs.begin(),jobs.end(),[&endTime](int a, int b){ return endTime[a]<endTime[b];});
        
        // DP map <endtime,profit> to maintain a increasing order of profit and end time
        map<int,int>dp;
        
        // add initial DP value => endtime profit 0 so that we can do upper_bound
        // search easily which is getting a 0 profit for finding no endtime
        dp[0]=0;    
        
        // loop through jobs data endtime and seach the upper bound of current job start time
        // if any job with end time <= current job start time exists then we get prev profit > 0, otherwise 0
        // current job profit will be the prev profit + current profit => updated profit
        // now as we want to maintain increasing order of profit we check updated profit with last profit in DP
        // if updated profit > last profit then we push updated profit in Map endtime 
        for(auto &t: jobs)
        {
            int val = prev(dp.upper_bound(startTime[t]))->second + profit[t];
            if(val > dp.rbegin()->second)
            {
                dp[endTime[t]] = val;
            }         
        }

        // max profit will be at the end of DP 
        return dp.rbegin()->second;
    }
};

int main() {
    Solution s;
    vector<int> startTime = {1, 2, 3, 4, 6};
    vector<int> endTime = {3, 5, 10, 6, 9};
    vector<int> profit = {20, 20, 100, 70, 60};
    cout << s.jobScheduling(startTime, endTime, profit) << endl;
    return 0;
}
