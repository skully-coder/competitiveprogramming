# Sorted Squared Array :    Return the square of the elements of the sorted array in sorted order. 
# (Using Greedy Approach)
#
#   O(N) Time | O(N) Space


def sortedSquare(array):
    sortedSquares = [0 for _ in array]
    left, right = 0, len(array) - 1
    
    for i in reversed(range(len(array))):
        if abs(array[left]) < abs(array[right]):
            sortedSquares[i] = array[right] ** 2
            right -= 1
        elif:
            sortedSquares[i] = array[left] ** 2
            left += 1
    
    return sortedSquares        

array=list(map(int,input().split()))
print(sortedSquare(array))
