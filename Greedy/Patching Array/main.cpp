#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        long patches = 0, count = 1, i = 0, sz = nums.size();
        while (count <= n) {
            
            if (i < sz && nums[i] <= count) count += nums[i++];
            
            else {
                count *= 2;
                patches++;
            }
        }
        
        return patches;
    }
};

int main() {
    Solution s;
    vector<int> nums = {1, 3};
    cout << s.minPatches(nums, 6) << endl;
    return 0;
}
