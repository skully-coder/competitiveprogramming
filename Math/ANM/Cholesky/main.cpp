// CPP program to decompose a matrix using
// Cholesky Decomposition
#include <bits/stdc++.h>
using namespace std;
#include <iostream>
const int MAX = 100;

void Cholesky_Decomposition(double matrix[][MAX],
                            int n)
{
    double lower[n][n];
    memset(lower, 0, sizeof(lower));

    // Decomposing a matrix doubleo Lower Triangular
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            double sum = 0;

            if (j == i) // summation for diagonals
            {
                for (int k = 0; k < j; k++)
                    sum += pow(lower[j][k], 2);
                lower[j][j] = sqrt(matrix[j][j] -
                                   sum);
            }
            else
            {

                // Evaluating L(i, j) using L(j, j)
                for (int k = 0; k < j; k++)
                    sum += (lower[i][k] * lower[j][k]);
                lower[i][j] = (matrix[i][j] - sum) /
                              lower[j][j];
            }
        }
    }

    // Displaying Lower Triangular and its Transpose
    cout << setw(6) << " Lower Triangular"
         << setw(30) << "Transpose" << endl;
    for (int i = 0; i < n; i++)
    {

        // Lower Triangular
        for (int j = 0; j < n; j++)
            cout << setw(6) << lower[i][j] << "\t";
        cout << "\t";

        // Transpose of Lower Triangular
        for (int j = 0; j < n; j++)
            cout << setw(6) << lower[j][i] << "\t";
        cout << endl;
    }
}

// Driver Code
int main()
{
    int n;
    scanf("%d", &n);
    double matrix[MAX][MAX];

    // Input Matrix
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> matrix[i][j];
    Cholesky_Decomposition(matrix, n);
    return 0;
}
