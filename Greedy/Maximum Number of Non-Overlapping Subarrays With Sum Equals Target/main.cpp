#include <iostream>
#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    int maxNonOverlapping(vector<int>& nums, int target) {
        int ans = 0, psum = 0;
        unordered_set<int> s;
        s.emplace(0);
        for (int i = 0; i < nums.size(); i++) {
            psum += nums[i];
            if (s.count(psum - target)) {
                ans++;
                s.clear();
            }
            s.emplace(psum);
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<int> nums{1, 2, 1, 2, 4, 2, 1};
    cout << s.maxNonOverlapping(nums, 3) << endl;
    return 0;
}
