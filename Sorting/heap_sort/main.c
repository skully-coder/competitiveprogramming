#include <stdio.h>

void insert(int A[],int n)
{
    int i=n, temp;
    temp = A[i];

    while(i>1 && temp>A[i/2])           //camparing with parent 
    {
        A[i] = A[i/2];           //copy the parent value that is copy the element from A[i/2]
        i=i/2;                        //i shold be move to parent
    }       
    A[i]=temp;          //move to the right place
}

int DeleteHeap(int A[], int n)
{
    int i,j,temp,val,x ;
    val=A[1];
    x=A[n];
    A[1]=A[n];

    A[n]=val;
    
    i=1;j=i*2;

    while (j<n-1)
    {
        if(A[j+1]>A[j])
        j=j+1;

        if(A[i]<A[j])
        {
            temp=A[i];          //swap
            A[i]=A[j];
            A[j]=temp;
            i=j;
            j=2*j;      //move into left child
        }
        else    
            break;
    }
    
    return val;

}

int HeapSort(int A[])
{
    for(i=2;i<=7;i++)
    {
        insert(H,i);
    }

    for(i=7;i>1;i--)
        DeleteHeap(H,i);

}

int main()
{
    int H[]={0,10,20,30,25,5,40,35};
    int i;

    for(i=2;i<=7;i++)
    {
        insert(H,i);
    }

    for(i=7;i>1;i--)
        DeleteHeap(H,i);

    for(i=2;i<=7;i++)
    {
        printf("%d ",H[i]);

    }
    printf("\n");
    return 0;

}
