# Matrix Determinant

The determinant of a matrix is a function of the entries of a square matrix.

A Matrix Determinant can be calculated like so:

![](https://www.chilimath.com/wp-content/uploads/2022/05/determinant-3x3-matrix-example-4.png)

The input should be a 2 dimensional square array (of ```nxn``` size)

The output should be an integer that is the matrix determinant

# Recursive Method 

1) Create a fuction that takes the matrix as the only argument
2) Return the determinant for length 1x1 (```matrix[0][0]```) and 2x2 (```(matrix[0][0]*matrix[1][1]) - (matrix[1][0]*matrix[0][1])```) arrays directly
3) Cycle trough the first row of the array (```x``` 1-4 for a length 4 array) and sum/subtract the product of each value and the determinant of the sub array (```x1*determinant - x2*determinant + x3*determinant - x4*determinant``` for a length 4 matrix) and repeat the cycle for the ensuing sub arrays of decreasing length
