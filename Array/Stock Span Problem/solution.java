// Java implementation for brute force method to calculate stock span values

import java.util.Arrays;

class Stockspan {
	// method to calculate stock span values
	static void calculateSpan(int price[], int n, int S[])
	{
		// Span value of first day is always 1
		S[0] = 1;

		// Calculate span value of remaining days by linearly checking
		// previous days
		for (int i = 1; i < n; i++) {
			S[i] = 1; // Initialize span value

			// Traverse left while the next element on left is smaller
			// than price[i]
			for (int j = i - 1; (j >= 0) && (price[i] >= price[j]); j--)
				S[i]++;
		}
	}

	// A utility function to print elements of array
	static void printArray(int arr[])
	{
		System.out.print(Arrays.toString(arr));
	}

	// Driver program to test above functions
	public static void main(String[] args)
	{
		int price[] = { 10, 4, 5, 90, 120, 80 };
		int n = price.length;
		int S[] = new int[n];

		// Fill the span values in array S[]
		calculateSpan(price, n, S);

		// print the calculated span values
		printArray(S);
	}
}
