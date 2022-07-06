class Solution {
public:
    int minimumSum(int num) {
        vector<int> v;
        int t=0;
        while(num>0)
        {
            t=num%10;
        
            v.push_back(t);
            num=num/10;
        
        }
    
        sort(v.begin(),v.end());
        string st=to_string(v[0])+to_string(v[3]);
        string st1=to_string(v[1])+to_string(v[2]);
        return stoi(st)+stoi(st1);
    }
};