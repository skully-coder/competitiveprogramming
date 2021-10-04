#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> addToArrayForm(vector<int> &num, int k)
    {
        vector<int> ans;               // generation of new vector array
        string new_key = to_string(k); // conversion of integer to string

        int loops;

        if (num.size() > new_key.size())
        {
            loops = num.size();
        }

        else
            loops = new_key.size();

        int end = num.size() - 1;      // pointing at last number of an array[] num
        int last = new_key.size() - 1; // pointing at last value of the array[] key

        int sum = 0, carry = 0;

        while (loops-- > 0)
        {
            if (end >= 0)
            {
                sum = carry + num[end];
                carry = 0;
            }

            if (last >= 0)
            {
                sum += ((int)new_key[last] - '0');
                sum += carry;

                carry = 0;
                last--;
            }

            if (sum > 9)
            {
                ans.insert(ans.begin(), sum % 10);
                carry = sum / 10;
            }

            else
            {
                ans.insert(ans.begin(), sum);
                carry = 0;
            }
            sum = 0;
            end--;
        }

        if (carry > 0)
            ans.insert(ans.begin(), carry); // adding the carried element in begining of an array

        return ans;
    }
};

int main()
{
    Solution S;

    vector<int> nums = {1, 2, 0, 0};
    int k = 34;

    vector<int> answer = S.addToArrayForm(nums, k);

    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i];
    }
    cout << endl;
    return 0;
}
