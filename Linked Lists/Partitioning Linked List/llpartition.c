#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
main()
{
    int n,k,i;
    struct node* head , *t , *newhead,*temp;
    head = NULL;
    t = head;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        struct node* nnode = (struct node*)malloc(8);
        scanf("%d",&nnode->data);
        if(head==NULL)
        {
            head = nnode;
        }
        else
        {
            t->next = nnode;
        }
        t=nnode;
    }
    t->next = NULL;
    i=0;
    temp=head;
    scanf("%d",&k);
    while(i<k-1)
    {
        temp=temp->next;
        i++;
    }
    newhead = temp->next;
    temp->next = NULL;
    temp = head;
    printf("Linked List 1 : ");
    while (temp)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    temp = newhead;
    printf("\nLinked List 2 : ");
    while (temp)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}