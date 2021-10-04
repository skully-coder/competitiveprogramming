class Rearrange
{

    // arr: input array
    // n: size of array
    //Function to rearrange an array so that arr[i] becomes arr[arr[i]]
    //with O(1) extra space.
    static void arrange(long arr[], int n)
    {
        // your code here
        long maxele=n;
        for (int i = 0; i < n; i++) {
            arr[i] = arr[i] + (arr[(int) arr[i]] % maxele) * maxele;
        }
            for (int j = 0; j < n; j++) {
                arr[j]/=maxele;
            }
    }
}
