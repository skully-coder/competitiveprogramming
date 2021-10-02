#include<bits/stdc++.h>
using namespace std;

int Kadane(int arr[],int size){
    int max_cur=arr[0],max_so_far=arr[0];
  
    for(int i=1;i<size;i++){
        max_cur=max(max_cur+arr[i],arr[i]);
        max_so_far=max(max_cur,max_so_far);
    }
    return max_so_far;
}

int main(){
    int size;
    cin >> size;
    int arr[size];
      for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
    cout<<Kadane(arr,size)<<"\n";
}
