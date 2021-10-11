#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void solve(int index, vector<vector<int>> output, vector<int> arr)
{
    if (index == arr.size())
    {
        output.push_back(arr);
        return;
    }
    for (int i = index; i < arr.size(); i++)
    {
        int temp = arr[index];
        arr[index] = arr[i];
        arr[i] = temp;
        solve(index + 1, output, arr);
        temp = arr[index];
        arr[index] = arr[i];
        arr[i] = temp;
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<vector<int>> output;
    solve(0, output, arr);
    for (int i = 0; i < output.size(); i++)
    {
        for (int j = 0; j < output[i].size(); j++)
        {
            cout << output[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
