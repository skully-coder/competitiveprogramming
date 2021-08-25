void doit(string &A, int moves, string &ans) {
    if(moves == 0) {
        ans = max(ans, A);
        return;
    }
    int n = A.length();
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            swap(A[i], A[j]);
            doit(A, moves-1, ans);
            swap(A[i], A[j]);
        }
    }
}

string Solution::solve(string A, int B) {
    string ans = A;
    doit(A, B, ans);
    return ans;
}
