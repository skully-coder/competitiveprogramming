#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int uniqueLetterString(string s) {
        int n = s.size();
        int last[26][2];
        memset(last, -1, sizeof(int) * 52);
        int ans = 0, prev = 0;
        for (int i=0;i<n;i++) {
            int index = s[i]-'A', &k2 = last[index][0], &k1 = last[index][1];
            prev += i + (k2) - 2*k1;
            ans += prev;
            k2 = k1;
            k1 = i;
        }
        
        return ans;
    }
};

int main() {
    Solution s;
    cout << s.uniqueLetterString("ABCDE") << endl;
    cout << s.uniqueLetterString("AAB") << endl;
    cout << s.uniqueLetterString("AAAB") << endl;
    cout << s.uniqueLetterString("AAABB") << endl;
    cout << s.uniqueLetterString("AAABBB") << endl;
    return 0;
}
