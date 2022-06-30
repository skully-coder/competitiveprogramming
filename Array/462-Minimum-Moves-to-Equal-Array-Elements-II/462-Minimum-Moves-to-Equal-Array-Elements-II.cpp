class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int moves = 0;
        int median = nums[nums.size()/2];
        for(int x: nums) {
            moves += abs(median - x);
        }
        return moves;
    }
};