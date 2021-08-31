#include <iostream>
#include <bits/stdc++.h>

using namespace std;
class Solution
{
public:
    bool isValidSerialization(string preorder)
    {
        stringstream ss(preorder);
        string curr;
        int nodes = 1;
        while (getline(ss, curr, ','))
        {
            nodes--;
            if (nodes < 0)
                return false;
            if (curr != "#")
                nodes += 2;
        }
        return nodes == 0;
    }
};

int main()
{
    Solution s;
    cout << s.isValidSerialization("9,3,4,#,#,1,#,#,2,#,6,#,#") << endl;
    cout << s.isValidSerialization("1,#") << endl;
    cout << s.isValidSerialization("9,#,#,1") << endl;
    cout << s.isValidSerialization("1,#,#,#") << endl;
    return 0;
}
