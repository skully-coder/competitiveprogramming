class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()<=1) return s.size();
        
        map<char, int> mp;
        int curr=0, res=0;
        for(int i=0;i<s.size();i++) {
            res=max(res, i-curr);
            if(mp.find(s[i])!=mp.end() && mp[s[i]]>=curr) {
                curr = mp[s[i]]+1;
            }
            mp[s[i]] = i;
        }
        if(res<s.size()-curr) return s.size()-curr;
		
        return res;
        
    }
};