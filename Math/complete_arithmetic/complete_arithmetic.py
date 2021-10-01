def complete_arithmetic(nums):
    return (nums[0] + nums[-1]) * (len(nums) + 1) // 2 - sum(nums)
#main
nums=list(map(int,input().split()))
print(complete_arithmetic(nums))
