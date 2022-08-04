class Solution {
public:
    int numDistinct(string S, string T) {
        int sLen = S.length(), tLen = T.length();
        if (sLen < tLen) return 0;
        if (sLen == tLen) {
            if (S.compare(T) == 0) {
                return 1;
            } else {
                return 0;
            }
        }
    
        unsigned long long path[tLen+1][sLen+1], i, j;
    
        for (i = 0; i <= sLen; ++i) {
            path[0][i] = 0;
        }
        for (j = 0; j <= tLen; ++j) {
            path[j][0] = 0;
        }
    
        for (i = 1; i <= tLen; ++i) {
            for (j = 1; j <= sLen; ++j) {
                if (T.at(i-1) == S.at(j-1)) {
                    // cout << "i = " << i << "\tj = " << j << "\t" << T.at(i-1) << " == " << S.at(j-1)  << ", ";
                    if (i != 1) {
                        // cout << "path[" << i << "][" << j << "] = " << "path[" << i << "][" << j-1 << "] + path[" << i-1 << "][" << j-1 << "]" << endl;
                        path[i][j] = path[i][j-1] + path[i-1][j-1];
                    } else {
                        // cout << "path[" << i << "][" << j << "] = " << "path[" << i << "][" << j-1 << "] + 1" << endl;
                        path[i][j] = path[i][j-1] + 1;
                    }
                } else {
                    // cout << "i = " << i << "\tj = " << j << "\t" << T.at(i-1) << " != " << S.at(j-1) << ", " << "path[" << i << "][" << j << "] = " << "path[" << i << "][" << j-1 << "]"<< endl;
                    path[i][j] = path[i][j-1];
                }   
            }
        }
        
        // for (i = 0; i <= tLen; ++i) {
        //     for (j = 0; j <= sLen; ++j) {
        //         cout << path[i][j] << "\t";
        //     }
        //     cout << endl;
        // }
        
        return path[tLen][sLen];
    }
};
// class Solution {
// public:
//     int numDistinct(string s, string t) {
//         int ns = s.length();
//         int nt = t.length();
//         vector<vector<unsigned long long>> dp(nt+1, vector<unsigned long long>(ns+1, 0));
//         dp[0][0] = 1;
//         for (int i=0; i<nt+1; i++) {
//             for (int j=1; j<ns+1; j++) {
//                 dp[i][j] = dp[i][j-1];
//                 for (int k=1; k<nt+1; k++) {
//                     if (i==k && s[j-1]==t[k-1])
//                         dp[i][j] = (dp[i][j] + dp[i-1][j-1]);
//                 }       
//             }
//         }       
//         return dp[nt][ns];
//     }
// };