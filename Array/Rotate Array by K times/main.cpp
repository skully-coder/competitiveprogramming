#include <iostream>
using namespace std;

// It is function to reverse the array

void reverse(int arr[], int l, int h)
{
    while (l < h)
    {
        swap(arr[l++], arr[h--]);
    }
}

void rotate(int arr[], int n, int k)
{
    k = k%n;

    // Divide array in two parts
    // 0 to n-k and n-k to n

    // reverse part 1
    reverse(arr, 0, n - k - 1);

    //reverse part 2
    reverse(arr, n - k, n - 1);

    //now reverse complete array
    reverse(arr, 0, n - 1);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    rotate(arr, 5, 3);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}