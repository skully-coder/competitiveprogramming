class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = nums[0];
        int count = 0;
        
        for(auto &num: nums) {
            if(count == 0) {
                candidate = num;
            }
            if(num == candidate) {
                count++;
            }
            else
                count--;
        }
        return candidate;
    }
};