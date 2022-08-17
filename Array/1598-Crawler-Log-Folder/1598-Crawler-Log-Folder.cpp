class Solution {
public:
    int minOperations(vector<string>& logs) {
        int count = 0;
        for(auto log: logs) {
            if(log.find("../") != string::npos) {
                if(count != 0)
                    count--;
            }
            else if (log.find("./") != string::npos) {
                // do nothing
            }
            else if (log.find("/") != string::npos) {
                count++;
            }
        }
        return abs(count);
    }
};