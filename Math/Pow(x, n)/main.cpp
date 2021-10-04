#include <iostream>
#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0)
            return 1.0;
        if (n % 2 == 0) 
            return myPow(x * x, n / 2);
        if (n > 0)
            return x * myPow(x, n - 1);
        return (1 / x) * myPow(x, n + 1);
    }
};

int main() {
    Solution s;
    cout << s.myPow(2.0, 10) << endl;
    return 0;
}
