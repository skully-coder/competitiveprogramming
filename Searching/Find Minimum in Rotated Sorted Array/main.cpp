#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;
        
        if (nums.size() == 1) {
            return nums[0];
        }
        if(nums[right] > nums[0])
            return nums[0];
        while(left <= right)
        {
            int mid = left + (right - left) / 2;
            if (nums[mid] > nums[mid + 1]) {
                return nums[mid + 1];
            }
            if (nums[mid - 1] > nums[mid]) {
            return nums[mid];
            }
            if (nums[mid] > nums[0]) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return -1;
    }
};

int main() {
    Solution s;
    vector<int> nums = {4,5,6,7,0,1,2};
    cout << s.findMin(nums) << endl;
    return 0;
}
