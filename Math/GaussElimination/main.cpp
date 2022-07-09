// C++ program to demonstrate working of Guassian Elimination
// method
#include <bits/stdc++.h>
using namespace std;
#include <iostream>
#define N 10 // Number of unknowns


// function to reduce matrix to r.e.f. Returns a value to
// indicate whether matrix is singular or not
int forwardElim(double mat[N][N + 1], int n);

// function to calculate the values of the unknowns
void backSub(double mat[N][N + 1], int n);

// function to get matrix content
void gaussianElimination(double mat[][N + 1], int n)
{
    /* reduction into r.e.f. */
    int singular_flag = forwardElim(mat, n);

    /* if matrix is singular */
    if (singular_flag != -1)
    {
        printf("Singular Matrix.\n");

        /* if the RHS of equation corresponding to
        zero row is 0, * system has infinitely
        many solutions, else inconsistent*/
        if (mat[singular_flag][N])
            printf("Inconsistent System.");
        else
            printf("May have infinitely many "
                   "solutions.");

        return;
    }

    /* get solution to system and print it using
    backward substitution */
    backSub(mat, n);
}

// function for elementary operation of swapping two rows
void swap_row(double mat[][N + 1], int i, int j, int n)
{
    // printf("Swapped rows %d and %d\n", i, j);

    for (int k = 0; k <= n; k++)
    {
        double temp = mat[i][k];
        mat[i][k] = mat[j][k];
        mat[j][k] = temp;
    }
}

// function to print matrix content at any stage
void print(double mat[][N + 1], int n)
{
    for (int i = 0; i < n; i++, printf("\n"))
        for (int j = 0; j <= n; j++)
            printf("%.4f\t", mat[i][j]);

    printf("\n");
}

// function to reduce matrix to r.e.f.
int forwardElim(double mat[][N + 1], int n)
{
    for (int k = 0; k < n; k++)
    {
        // Initialize maximum value and index for pivot
        int i_max = k;
        int v_max = mat[i_max][k];

        /* find greater amplitude for pivot if any */
        for (int i = k + 1; i < n; i++)
            if (abs(mat[i][k]) > v_max)
                v_max = mat[i][k], i_max = i;

        /* if a prinicipal diagonal element is zero,
         * it denotes that matrix is singular, and
         * will lead to a division-by-zero later. */
        if (!mat[k][i_max])
            return k; // Matrix is singular

        /* Swap the greatest value row with current row */
        if (i_max != k){
            cout << "Swapped rows " << k + 1 << " and " << i_max + 1 << endl;
            swap_row(mat, k, i_max, n);
            print(mat, n);
        }

        for (int i = k + 1; i < n; i++)
        {
            /* factor f to set current row kth element to 0,
             * and subsequently remaining kth column to 0 */
            double f = mat[i][k] / mat[k][k];

            /* subtract fth multiple of corresponding kth
            row element*/

            cout << "R" << i + 1 << " = R" << i + 1 << " - " << f << " * R" << k + 1 << endl;
            for (int j = k + 1; j <= n; j++)
                mat[i][j] -= mat[k][j] * f;

            /* filling lower triangular matrix with zeros*/
            mat[i][k] = 0;
        }

        print(mat, n);	 //for matrix state
    }
    print(mat, n);		 //for matrix state
    return -1;
}

// function to calculate the values of the unknowns
void backSub(double mat[N][N + 1], int n)
{
    double x[n]; // An array to store solution

    /* Start calculating from last equation up to the
    first */
    for (int i = n - 1; i >= 0; i--)
    {
        /* start with the RHS of the equation */
        x[i] = mat[i][n];

        /* Initialize j to i+1 since matrix is upper
        triangular*/
        for (int j = i + 1; j < n; j++)
        {
            /* subtract all the lhs values
             * except the coefficient of the variable
             * whose value is being calculated */
            x[i] -= mat[i][j] * x[j];
        }

        /* divide the RHS by the coefficient of the
        unknown being calculated */
        x[i] = x[i] / mat[i][i];
    }

    printf("\nSolution for the system:\n");
    for (int i = 0; i < n; i++)
        printf("%lf\n", x[i]);
}

// Driver program
int main()
{
    /* input matrix */
    double mat[N][N + 1];

    int n;
    scanf("%d", &n);
    /* fill the matrix with values */
    for (int i = 0; i < n; i++)
        for (int j = 0; j <= n; j++)
            scanf("%lf", &mat[i][j]);


    /* print the matrix */
    printf("Matrix:\n");
    print(mat, n);
    gaussianElimination(mat, n);

    return 0;
}
