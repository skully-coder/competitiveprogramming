# This is a small article on Prefix array sum for better understanding of the concept of prefix array.
# I haven't included the direct code, but all the required things for the syudy of the concept is included and would hopefully help too.
 
# At the end I have included a question on the concept, which can be practiced for getting hands on the concept,

Let's Take a question in which you are provided an array of n numbers as input, and then you need to add k to each element of the array n lying between the indices l and k(both included and zero based indexing). 
eg:	 n=5
	2 5 7 3 5
	k=3 l=1 r=3
	
Output: 2 8 10 6 5

In such a case, an ideal solution would be to use a loop and itterate from l to r and add k to each.

for(int i=l;i<=r;i++)
	a[i]+=k;
	
This soltion has a time complexity of O(N) as the loop itterates from l to r which can have a maximum difference of n.

But now let's say we have q queries for l,r,k and we need to print the final array after the queries. In such a case, the solution can be the brute force way, if the number of queries and n are small.

for(int i=0;i<q;i++)
{
	int l,r,k;
	cin>>l>>r>>k;
	for(int j=l;j<=r;j++)
		a[j]+=k;
}
for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
cout<<'\n";

This code has a time complexity of O(q*n).
Say, n and q can have values of upto 10^6. 
In such a case we would get a time limit exceed error, as most contests have a compilation time limit of 1 or 2 seconds and in a second 10^7 to 10^8 basic opperations can usually be run.With this time complexity, out code will have around 10^12 processes in worst case. 
So, we come up with a ew algorithm to deal with this problem. This is called a prefix array sum.
We create another array b of the same size as a and initialize all it's elements to 0.

Now, for each query we add the element k to only the lth index and sutract it from the r+1th index.

Calculating the Prefix array:

int Prefix[n],suffix[n];
Prefix[0]=arr[0];
for(int i=1;i<n;i++) Prefix[i]=Prefix[i-1]+Arr[i];
//O(n)

Now for handling the q queries:

for(int query=1;query<=q;query++)
{  // O(q);
	int l,r;
	cin>>l>>r;
	int sum = 0;
        if(l!=0)
        	sum=Prefix[r]-Prefix[l-1]; // O(1);
	else sum=Prefix[r];  // O(1);
	cout<<sum<<endl;
}

Time Complexity: O(max(q,n))


# Question to practice on:
Problem link: https://codeforces.com/contest/1473/problem/D
Working on this will boost the understanding and help clear many things.
