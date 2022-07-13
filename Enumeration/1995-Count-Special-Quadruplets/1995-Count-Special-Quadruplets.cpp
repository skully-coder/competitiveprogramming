class Solution {
public:
    int countQuadruplets(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        unordered_map<int, int> mp;
        
        for(int b = 1; b<n; b++) {
            for(int a = 0; a<b; a++) {
                mp[nums[a] + nums[b]]++;
            }
            
            int c = b+1;
            for(int d = b + 2; d < n; d++)
            {
                if(mp.count(nums[d] - nums[c]))
                    count += mp[nums[d] - nums[c]];
            }
        }
        return count;
        
    }
};