#include<iostream>    //header file
#include<stdio.h>     //header file
struct Node           //declaring structure to assign the node whenever called or created
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};



// Deletes middle of linked list and returns head of the modified list
Node* deleteMid(Node* head)
{
    Node*temp=head;
   int n=0;
   while(temp!=NULL){
       n=n+1;
       temp=temp->next;
   }
   temp=head;
   n=n/2;
   for(int i=1;i<n;i++){
       temp=temp->next;
   }
   temp->next=temp->next->next;
   return head;
}