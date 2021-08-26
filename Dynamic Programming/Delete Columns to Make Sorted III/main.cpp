#include <iostream>
#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int m = strs[0].size(), n= strs.size();
        vector<int> dp = vector<int>(m+2);
        for (int i = 2;i<=m+1;i++) {
            dp[i] = i-1;
           
            for (int k = 1;k <i;k++) { 
                bool sat = true;
                if (i <= m) { 
                   for (auto & s: strs) { 
                        if (s[i-1] < s[k-1]) {
                            sat = false;
                            break;
                        }
                    } 
                }
                
                if (sat) {
                    dp[i] = min(dp[i], dp[k] + i-k-1);
                }
            }
        }
        return dp.back();
    }
};

int main() {
    Solution s;
    vector<string> strs{"cba","daf","ghi"};
    cout << s.minDeletionSize(strs) << endl;
    return 0;
}
