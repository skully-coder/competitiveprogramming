// C++ Implementation for Gauss-Jordan
// Elimination Method
#include <bits/stdc++.h>
using namespace std;

#define M 10

// Function to print the matrix
void PrintMatrix(double a[][M], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n; j++)
            printf("%.4f\t", a[i][j]);
        cout << endl;
    }
}

// function to reduce matrix to reduced
// row echelon form.
int PerformOperation(double a[][M], int n)
{
    int i, j, k = 0, c, flag = 0, m = 0;
    double pro = 0;

    // Performing elementary operations
    for (i = 0; i < n; i++)
    {
        if (a[i][i] == 0)
        {
            c = 1;
            while ((i + c) < n && a[i + c][i] == 0)
                c++;
            if ((i + c) == n)
            {
                flag = 1;
                break;
            }
            for (j = i, k = 0; k <= n; k++)
                swap(a[j][k], a[j + c][k]);

            PrintMatrix(a, n);
            cout << endl;
        }

        for (j = 0; j < n; j++)
        {

            // Excluding all i == j
            if (i != j)
            {

                // Converting Matrix to reduced row
                // echelon form(diagonal matrix)
                double pro = a[j][i] / a[i][i];

                for (k = 0; k <= n; k++)
                    a[j][k] = a[j][k] - (a[i][k]) * pro;

                // cout << "R" << j + 1 << " = R" << j + 1 << " - " << pro << " * R" << i + 1 << endl;
                printf("R%d = R%d - %.4f * R%d\n", j + 1, j + 1, pro, i + 1);
            }
            PrintMatrix(a, n);
            cout << endl;
        }
    }
    return flag;
}

// Function to print the desired result
// if unique solutions exists, otherwise
// prints no solution or infinite solutions
// depending upon the input given.
void PrintResult(double a[][M], int n, int flag)
{
    cout << "Result is : ";

    if (flag == 2)
        cout << "Infinite Solutions Exists" << endl;
    else if (flag == 3)
        cout << "No Solution Exists" << endl;

    // Printing the solution by dividing constants by
    // their respective diagonal elements
    else
    {
        for (int i = 0; i < n; i++)
            cout << a[i][n] / a[i][i] << " ";
    }
}

// To check whether infinite solutions
// exists or no solution exists
int CheckConsistency(double a[][M], int n, int flag)
{
    int i, j;
    double sum;

    // flag == 2 for infinite solution
    // flag == 3 for No solution
    flag = 3;
    for (i = 0; i < n; i++)
    {
        sum = 0;
        for (j = 0; j < n; j++)
            sum = sum + a[i][j];
        if (sum == a[i][j])
            flag = 2;
    }
    return flag;
}


// Driver code
int main()
{
    int n;
    scanf("%d", &n);
    double a[M][M];

    // Input Matrix
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n + 1; j++)
            cin >> a[i][j];

    // Order of Matrix(n)
    int flag = 0;

    // Performing Matrix transformation
    flag = PerformOperation(a, n);

    if (flag == 1)
        flag = CheckConsistency(a, n, flag);

    // Printing Final Matrix
    cout << "Final Augmented Matrix is : " << endl;
    PrintMatrix(a, n);
    cout << endl;

    // Printing Solutions(if exist)
    PrintResult(a, n, flag);

    return 0;
}
