//cpp code to merge two sorted arrays with O(1) extra space.

/*method 1:  Insertion Sort
         Time Complexity: O(m*n)
         steps:
               1) Iterate through every element of ar2[] starting from last element. Do following for every element ar2[i]
                  a) Store last element of ar1[i].
                             last = ar1[i]
                  b) Loop from last element of ar1[] while element ar1[j] is greater than ar2[i].
                             ar1[j+1] = ar1[j] // Move element one position ahead
                             j--
                  c) If any element of ar1[] was moved or (j != m-1)
                             ar1[j+1] = ar2[i] 
                             ar2[i] = last
/*
// code
         
#include <bits/stdc++.h>
using namespace std;

void merge(int ar1[], int ar2[], int m, int n)
{

	for (int i = n - 1; i >= 0; i--)
	{
		int j, last = ar1[m - 1];
		for (j = m - 2; j >= 0
			&& ar1[j] > ar2[i]; j--)
			ar1[j + 1] = ar1[j];

		if (j != m - 2 || last > ar2[i])
		{
			ar1[j + 1] = ar2[i];
			ar2[i] = last;
		}
	}
}

// Driver program
int main()
{
	int ar1[] = { 1, 15, 20 };
	int ar2[] = { 2, 8, 13 };
	int m = sizeof(ar1) / sizeof(ar1[0]);
	int n = sizeof(ar2) / sizeof(ar2[0]);
	merge(ar1, ar2, m, n);

	cout << "After Merging"<<endl;
  
  cout <<"First Array: ";
	for (int i = 0; i < m; i++)
		cout << ar1[i] << " ";
    
	cout <<endl<< "Second Array: ";
	for (int i = 0; i < n; i++)
		cout << ar2[i] << " ";
	return 0;
}

/*
output:
        After Merging
        First Array: 1 2 8 
        Second Array: 13 15 20 
        =====
        Used: 0 ms, 3644 KB
*/


/*method 2: (Efficient solution)
         Time Complexity: O(min(nlogn, mlogm))
         steps:
               1) Select the shorter array and find the index at which partition should be done.
                        a) Partition the shorter array at its median (l1).
                        b) Select the first n-l1 elements from the second array.
                        c) Compare the border elements i.e.
                            if l1 < r2 and l2 < r2 we have found the index
                           else if l1 > r2 we have to search in the left subarray
                           else we have to search in the right subarray      
               2) Swap all the elements right to the index(i) of the shorter array with the first n-i elements of the larger array.
               3) Sort both the arrays.
                      if len(arr1) > len(arr2) all the smallest elements are stored in arr2 so we have to move all the elements in arr1 since we have to print arr1 first.
               4) Rotate the larger array (arr1) m times counter-clockwise.
               5) Swap the first m elements of both the arrays.
/*

// code 

#include <bits/stdc++.h>
using namespace std;

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void rotate(int a[], int n, int idx)
{
	int i;
	for (i = 0; i < idx / 2; i++)
		swap(a[i], a[idx - 1 - i]);
	for (i = idx; i < (n + idx) / 2; i++)
		swap(a[i], a[n - 1 - (i - idx)]);
	for (i = 0; i < n / 2; i++)
		swap(a[i], a[n - 1 - i]);
}

void sol(int a1[], int a2[], int n, int m)
{
	int l = 0, h = n - 1, idx = 0;

	while (l <= h) {
		int c1 = (l + h) / 2;
		int c2 = n - c1 - 1;
		int l1 = a1[c1];
		int l2 = a2[c2 - 1];
		int r1 = c1 == n - 1 ? INT_MAX : a1[c1 + 1];
		int r2 = c2 == m ? INT_MAX : a2[c2];
		
		if (l1 > r2) {
			h = c1 - 1;
			if (h == -1)
				idx = 0;
		}
		else if (l2 > r1) {
			l = c1 + 1;
			if (l == n - 1)
				idx = n;
		}
		else {
			idx = c1 + 1;
			break;
		}
    
	}

	for (int i = idx; i < n; i++)
		swap(a1[i], a2[i - idx]);
	  sort(a1, a1 + n);
    sort(a2, a2 + m);
}

void merge(int arr1[], int arr2[], int n, int m)
{
	if (n > m) {
		sol(arr2, arr1, m, n);
		rotate(arr1, n, n - m);

		for (int i = 0; i < m; i++)
			swap(arr2[i], arr1[i]);
	}
	else {
		sol(arr1, arr2, n, m);
	}
  
}

// Driver program
int main()
{
	int ar1[] = { 1, 15, 20 };
	int ar2[] = { 2, 8, 13 };
	int m = sizeof(ar1) / sizeof(ar1[0]);
	int n = sizeof(ar2) / sizeof(ar2[0]);
	merge(ar1, ar2, m, n);

	cout << "After Merging"<<endl;
  
  cout <<"First Array: ";
	for (int i = 0; i < m; i++)
		cout << ar1[i] << " ";
    
	cout << endl<<"Second Array: ";
	for (int i = 0; i < n; i++)
		cout << ar2[i] << " ";
	return 0;
}

/*
output:
        After Merging
        First Array: 1 2 8 
        Second Array: 13 15 20 
        =====
        Used: 0 ms, 3644 KB
*/
 
