class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer, Integer> comp = new HashMap<Integer, Integer>();
        for (int i = 0; i < nums.length ; i++)
        {
            if (comp.containsKey(target-nums[i]))
            {
				return new int[] {i, comp.get(target-nums[i])};
            }
            else
            {
                comp.put(nums[i], i);
            }
        }
        return null;
    }
}