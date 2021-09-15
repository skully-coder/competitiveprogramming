#include <iostream>
#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    int maxTurbulenceSize(vector<int>& A) {
        if (A.size() == 0) return 0;
        
        if (A.size() == 1) return 1;

        bool inc = A[0] < A[1];
        int count = (A[0] != A[1]) ? 2 : 1;
        int max = count;
        for (int j = 1; j < A.size()-1; j++) {
            if (inc && A[j] > A[j+1] || !inc && A[j] < A[j+1]) {
                count++;
                max = max > count ? max : count;
            }
            else {
                count = (A[j] != A[j+1]) ? 2 : 1;
            }
            inc = A[j] < A[j+1];
        } 
        return max;
    }
};

int main() {
    Solution s;
    vector<int> A = {9,4,2,10,7,8,8,1,9};
    cout << s.maxTurbulenceSize(A) << endl;
    return 0;
}
