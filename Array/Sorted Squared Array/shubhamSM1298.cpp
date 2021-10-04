//============================================================================
// Name        : shubhamSM1298.cpp
// Author      : Shubham
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <bits/stdc++.h>
using namespace std;


void sortSquares(int arr[],int n)
{

    int K=0;
    for (K=0;K<n;K++)
        if (arr[K]>=0)
            break;


    int i=K-1,j=K,ind=0;

    int temp[n];



    while(i>=0&&j<n)
    {
        if(arr[i]*arr[i]<arr[j]*arr[j])
        {
            temp[ind]=arr[i]*arr[i];
            i--;
        }
        else
        {
            temp[ind]=arr[j]*arr[j];
            j++;
        }
        ind++;
    }




    while(i>=0)
    {
        temp[ind]=arr[i]*arr[i];
        i--;
        ind++;
    }




    while(j<n)
    {
        temp[ind]=arr[j]*arr[j];
        j++;
        ind++;
    }




    for (int i=0;i<n;i++)
        arr[i]=temp[i];
}


int main()
{
	nt arr[] = { -36, -9, -1, 2, 7, 5 };
	    int n = sizeof(arr) / sizeof(arr[0]);

	      cout << "Before sort " << endl;
	      for (int i = 0; i < n; i++)
	          cout << arr[i] << " ";
	          cout<<endl;
	    sortSquares(arr, n);

	      cout << "\nAfter Sort " << endl;
	      for (int i = 0; i < n; i++)
	          cout << arr[i] << " ";
	          cout<<endl;
	    return 0;
}
