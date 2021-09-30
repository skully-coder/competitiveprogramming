# LET's take the first test case
arr=[1,3,3,2]


                                                                                            # Intuition
                                                                                            

# There are n + 1 positive numbers in the array (nums) (all in the range [1, n]). Since the array only contains positive integers, we can track each number (num) that has been seen before by flipping the sign of the number located at index |num|, where || denotes absolute value.

# For example, if the input array is [1, 3, 3, 2], then for 1, flip the number at index 1, making the array [1,−3,3,2]. Next, for −3 flip the number at index 3, making the array [1,−3,3,−2]. Finally, when we reach the second 3, we'll notice that nums[3] is already negative, indicating that 3 has been seen before and hence is the duplicate number.

                                                                                            # Algorithm

# Iterate over the array, evaluating each element (let's call the current element curcur).

# Since we use negative marking, we must ensure that the current element (curcur) is positive (i.e. if curcur is negative, then use its absolute value).

# Check if nums[cur]nums[cur] is negative.

# If it is, then we have already performed this operation for the same number, and hence curcur is the duplicate number. Store curcur as the duplicate and exit the loop.

# Otherwise, flip the sign of nums[cur]nums[cur] (i.e. make it negative). Move to the next element and repeat step 3.

# Once we've identified the duplicate, we could just return the duplicate number. However, even though we were not able to meet the problem constraints, we can show that we are mindful of the constraints by restoring the array. This is done by changing all negative numbers to positive.

for i in range(len(arr)):
    if arr[abs(arr[i])-1]>0:
        arr[abs(arr[i])-1]=-arr[abs(arr[i])-1]
    else:
        print('repeated element in the array is ->', abs(arr[i]))
