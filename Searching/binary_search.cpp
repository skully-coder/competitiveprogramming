#include<iostream>
using namespace std;

int binary_search(int *p, int n, int r, int m){
	int q;
	if(n<=r){
		int mid = (n+r)/2;
		q++;
		if(p[mid] == m)
			return mid;
		if(p[mid]>m)
			return binary_search(p, n, mid-1, m);
		if(p[mid]<m)
			return binary_search(p, mid+1, r, m);	
	}
	cout<<q<<endl;
	return -1;

}


int main(){
	int n;
	cout<<"Enter the size of array: "<<endl;
	cin>>n;
	int *p = new int[n];
	cout<<"Enter the elements of sorted array: "<<endl;
	for(int i=0;i<n;i++){
		cin>>p[i];
	}
	cout<<"Enter the element to be found: "<<endl;
	int m;
	cin>>m;
	int res = binary_search(p, 0, n-1, m);
	if(res == -1)
		cout<<"Your given element is not present in the array"<<endl;
	else
		cout<<"Your given element is present in the array"<<endl;

	delete [] p;
}
