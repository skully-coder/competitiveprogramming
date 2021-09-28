#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        int n = A.size();
        int i = 0, j = 1;
        while (i < n && j < n) {
            while (i < n && A[i] % 2 == 0) i += 2;
            while (j < n && A[j] % 2 == 1) j += 2;
            if (i < n && j < n) swap(A[i], A[j]);
        }
        return A;
    }
};

int main() {
    Solution s;
    vector<int> A = {4, 2, 5, 7};
    vector<int> ans = s.sortArrayByParityII(A);
    for (auto i : ans) cout << i << " ";
    cout << endl;
    return 0;
}
