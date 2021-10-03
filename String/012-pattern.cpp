//Seema Kumari Patel 03-oct-21

// C++ implementation for 0, 1, 2 array
#include <bits/stdc++.h>
using namespace std;

void printArr(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
}

// Function to sort the array of 0s, 1s and 2s
void sortArr(int arr[], int n)
{
	int i, cnt0 = 0, cnt1 = 0, cnt2 = 0;

	// Count the number of 0s, 1s and 2s in the array
	for (i = 0; i < n; i++) {
		switch (arr[i]) {
		case 0:
			cnt0++;
			break;
		case 1:
			cnt1++;
			break;
		case 2:
			cnt2++;
			break;
		}
	}

	i = 0;

	//  0s in the beginning
	while (cnt0 > 0) {
		arr[i++] = 0;
		cnt0--;
	}

	//  1s next
	while (cnt1 > 0) {
		arr[i++] = 1;
		cnt1--;
	}

	// 2s finally
	while (cnt2 > 0) {
		arr[i++] = 2;
		cnt2--;
	}

	// Print the sorted array
	printArr(arr, n);
}


int main()
{
	int arr[] = { 0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1 };
	int n = sizeof(arr) / sizeof(int);

	sortArr(arr, n);

	return 0;
}
