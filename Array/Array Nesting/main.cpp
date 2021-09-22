#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int arrayNesting(vector<int> &nums)
    {
        vector<bool> visited(nums.size());
        int res = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (!visited[i])
            {
                int start = nums[i], count = 0;
                do
                {
                    start = nums[start];
                    count++;
                    visited[start] = true;
                } while (start != nums[i]);
                res = max(res, count);
            }
        }
        return res;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {5, 4, 0, 3, 1, 6, 2};
    cout << s.arrayNesting(nums) << endl;
    return 0;
}
