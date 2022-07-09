// C++ Program to decompose a matrix into
// lower and upper triangular matrix
#include <bits/stdc++.h>
using namespace std;

const int MAX = 100;

void luDecomposition(double mat[][MAX], int n)
{
	double lower[n][n], upper[n][n];
	memset(lower, 0, sizeof(lower));
	memset(upper, 0, sizeof(upper));

	// Decomposing matrix into Upper and Lower
	// triangular matrix
	for (int i = 0; i < n; i++)
	{
		// Upper Triangular
		for (int k = i; k < n; k++)
		{
			// Summation of L(i, j) * U(j, k)
			double sum = 0;
			for (int j = 0; j < i; j++)
				sum += (lower[i][j] * upper[j][k]);

			// Evaluating U(i, k)
			upper[i][k] = mat[i][k] - sum;
		}

		// Lower Triangular
		for (int k = i; k < n; k++)
		{
			if (i == k)
				lower[i][i] = 1; // Diagonal as 1
			else
			{
				// Summation of L(k, j) * U(j, i)
				double sum = 0;
				for (int j = 0; j < i; j++)
					sum += (lower[k][j] * upper[j][i]);

				// Evaluating L(k, i)
				lower[k][i] = (mat[k][i] - sum) / upper[i][i];
			}
		}
	}

	// setw is for displaying nicely
	cout << setw(6)
		 << "	 Lower Triangular"
		 << setw(32)
		 << "Upper Triangular" << endl;

	// Displaying the result :
	for (int i = 0; i < n; i++)
	{
		// Lower
		for (int j = 0; j < n; j++)
			cout << setw(6) << lower[i][j] << "\t";
		cout << "\t";

		// Upper
		for (int j = 0; j < n; j++)
			cout << setw(6) << upper[i][j] << "\t";
		cout << endl;
	}
}

// Driver code
int main()
{
	int n;
	scanf("%d", &n);
	double mat[MAX][MAX];
	
	// input matrix
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			scanf("%lf", &mat[i][j]);
	luDecomposition(mat, n);
	return 0;
}
