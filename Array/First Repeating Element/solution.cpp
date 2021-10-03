#include <bits/stdc++.h>
using namespace std;
int main()
{
  int number; // declare the number of elements
  cin>>number;
  int arr[number];
  for(int i=0;i<number;i++)
  {
      cin>>arr[i];
  }
  for(int i=0;i<number;i++) // select an element
  {
    for(int j=i+1;j<number;j++) //traverse ahead and check for duplicate
    { 
        if(arr[i]==arr[j])
          {
            cout<<i+1; // display the first occuring index of the repeated element
            return 0;
          }
    }
  }
  cout<<"No repeating integer found\n";
  return 0;
}