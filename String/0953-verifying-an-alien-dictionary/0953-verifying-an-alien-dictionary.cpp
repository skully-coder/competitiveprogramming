unordered_map<char, int> m;

bool cmp(string a, string b){
    int n = min(a.length(), b.length());
    for(int i = 0; i < n; i++){
        if(m[a[i]] < m[b[i]]){
            return true;
        }
        else if(m[a[i]] > m[b[i]]){
            return false;
        }
    }
    if(a.length() <= b.length()){
        return true;
    }
    return false;
}

class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        for(int i = 0; i < order.length(); i++){
            m[order[i]] = i;
        }
        vector<string> temp = words;
        sort(temp.begin(), temp.end(), cmp);
        return temp == words;
    }
};