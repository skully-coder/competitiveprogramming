
/**
 * @file Two Sum II - Input array is sorted.cpp
 * @author Vipul Kumar Singh
 * @version 0.1
 * @date 2021-10-04
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {

        vector<int> ans;

        int first = 0, last = numbers.size() - 1, mid;
        while (true)
        {
            if (numbers[first] + numbers[last] > target)
            {
                last--;
            }

            else if (numbers[first] + numbers[last] < target)
            {
                first++;
            }

            else
            {
                ans.insert(ans.begin(), first + 1);
                ans.insert(ans.begin() + 1, last + 1);

                break;
            }
        }
        return ans;
    }
};

int main()
{
    Solution S;

    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> answer = S.twoSum(nums, target);

    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i];
    }
    cout << endl;
    return 0;
}
