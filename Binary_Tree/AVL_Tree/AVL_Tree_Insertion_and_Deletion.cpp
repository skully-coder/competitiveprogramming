#include<iostream>
#include<bits/stdc++.h>
#define TRUE 1
#define FALSE 0
using namespace std;
struct node{
  struct node* lchild;
  struct node* rchild;
  int balance;
  int info;
};
struct node* createnode(int x )
{
    struct node* tmp = new struct node;
    if(tmp==NULL)
    {
        cout << "Memory overflow" << endl;
        exit(1);
    }
    tmp->info=x;
    tmp->lchild=NULL;
    tmp->rchild=NULL;
    return tmp;
};
struct node* leftrotate(struct node* ptr)
{
    struct node* qptr=ptr->rchild;
    ptr->rchild=qptr->lchild;
    qptr->lchild=ptr;
    return qptr;

};
struct node* rightrotate(struct node* ptr)
{
    struct node* qptr=ptr->lchild;
    ptr->lchild=qptr->rchild;
    qptr->rchild=ptr;
    return qptr;

};

struct node* insert_rightbalance(struct node* pptr)
{
    struct node* aptr=pptr->rchild,*bptr;
    if(aptr->balance==-1)
    {
        pptr->balance=0;
        aptr->balance=0;
        pptr=leftrotate(pptr);

    }
    else{
        bptr=aptr->lchild;
        if(bptr->balance==-1)
        {
             pptr->balance=0;
             aptr->balance=1;


        }
        else if(bptr->balance==1)
        {
             pptr->balance=-1;
             aptr->balance=0;


        }
        else
        {
             pptr->balance=0;
             aptr->balance=0;

        }
        bptr->balance=0;
        pptr->rchild=rightrotate(aptr);
        pptr=leftrotate(pptr);

       return pptr;

    }
};
struct node* insert_rightcheck(struct node* pptr,int* ptaller)
{
    switch(pptr->balance)
    {
    case 0:
           pptr->balance=-1;
           break;

    case 1:
           pptr->balance=0;
           *ptaller=FALSE;
           break;

    case -1:
           pptr=insert_rightbalance(pptr);
           *ptaller=FALSE;
           break;

    default:
          cout << "error" << endl;


    }

    return pptr;
};
struct node* insert_leftbalance(struct node* pptr)
{
    struct node* aptr=pptr->lchild,*bptr;
    if(aptr->balance==1)
    {
        pptr->balance=0;
        aptr->balance=0;
        pptr=rightrotate(pptr);

    }
    else{
        bptr=aptr->rchild;
        if(bptr->balance==1)
        {
             pptr->balance=-1;
             aptr->balance=0;

        }
        else if(bptr->balance==-1)
        {
             pptr->balance=0;
             aptr->balance=1;


        }
        else
        {
             pptr->balance=0;
             aptr->balance=0;

        }
        bptr->balance=0;
        pptr->lchild=leftrotate(aptr);
        pptr=rightrotate(pptr);

       return pptr;

    }
};
struct node* insert_leftcheck(struct node* pptr,int* ptaller)
{
    switch(pptr->balance)
    {
    case 0:
           pptr->balance=1;
           break;

    case -1:
           pptr->balance=0;
           *ptaller=FALSE;
           break;

    case 1:
           pptr=insert_leftbalance(pptr);
           *ptaller=FALSE;
           break;

    default:
          cout << "error" << endl;


    }

    return pptr;
};
struct node* insert(struct node* ptr,int key)
{
    static int taller;
    if(ptr==NULL)
    {
        ptr= createnode(key);
        ptr->balance=0;
        taller= TRUE;
    }
    else if(key > ptr->info)
    {
        ptr->rchild= insert(ptr->rchild,key);
        if(taller==TRUE)
              ptr=insert_rightcheck(ptr,&taller);
    }
    else if(key < ptr->info)
    {
        ptr->lchild= insert(ptr->lchild,key);
        if(taller==TRUE)
              ptr=insert_leftcheck(ptr,&taller);
    }
    else{
        cout << "Duplicate Key" << endl;
        taller=FALSE;


    }
    return ptr;
};
struct node* del_right_balance(struct node*pptr,int* pshorter)
{
    struct node*aptr=pptr->lchild;
    if(aptr->balance==0)
    {
        pptr->balance=1;
        aptr->balance=-1;
        pptr=rightrotate(pptr);
        *pshorter=FALSE;
    }
    else if(aptr->balance==1)
    {
        pptr->balance=0;
        aptr->balance=0;
        pptr=rightrotate(pptr);
    }
    else
    {
        struct node* bptr=aptr->rchild;
        if(bptr->balance==0)
        {
          pptr->balance=0;
          aptr->balance=0;

        }
        else if(bptr->balance==1)
        {
          pptr->balance=-1;
          aptr->balance=0;

        }
        else
        {
          pptr->balance=0;
          aptr->balance=1;

        }
        bptr->balance=0;
        pptr->lchild=leftrotate(aptr);
        pptr=rightrotate(pptr);


    }
    return pptr;
};
struct node* del_right_check(struct node* pptr,int* pshorter)
{
    switch(pptr->balance)
    {
      case 0:
          pptr->balance=1;
          *pshorter=FALSE;
           break;
      case -1:
           pptr->balance=0;
           break;
      case 1:
           pptr=del_right_balance(pptr,pshorter);
           break;
    }
    return pptr;
};
struct node* del_left_balance(struct node*pptr,int* pshorter)
{
    struct node*aptr=pptr->rchild;
    if(aptr->balance==0)
    {
        pptr->balance=-1;
        aptr->balance=1;
        pptr=leftrotate(pptr);
        *pshorter=FALSE;
    }
    else if(aptr->balance==-1)
    {
        pptr->balance=0;
        aptr->balance=0;
        pptr=leftrotate(pptr);
    }
    else
    {
        struct node* bptr=aptr->lchild;
        if(bptr->balance==0)
        {
          pptr->balance=0;
          aptr->balance=0;

        }
        else if(bptr->balance==1)
        {
          pptr->balance=0;
          aptr->balance=-1;

        }
        else
        {
          pptr->balance=1;
          aptr->balance=0;

        }
        bptr->balance=0;
        pptr->rchild=rightrotate(aptr);
        pptr=leftrotate(pptr);


    }
   return pptr;
};
struct node* del_left_check(struct node* pptr,int* pshorter)
{
    switch(pptr->balance)
    {
      case 0:
          pptr->balance=-1;
          *pshorter=FALSE;
           break;
      case 1:
           pptr->balance=0;
           break;
      case -1:
           pptr=del_left_balance(pptr,pshorter);
           break;
    }
    return pptr;
};
struct node* deleted(struct node* ptr,int key)
{
    static int shorter;
    if(ptr==NULL)
    {
        cout << "Key not found" << endl;
        shorter=FALSE;
    }
    if(key > ptr->info)
    {
        ptr->rchild=deleted(ptr->rchild,key);
        if(shorter==TRUE)
            ptr=del_right_check(ptr,&shorter);
    }
    else if(key < ptr->info)
    {
        ptr->lchild=deleted(ptr->lchild,key);
        if(shorter==TRUE)
            ptr=del_left_check(ptr,&shorter);
    }
    else
    {
        if((ptr->lchild!=NULL) && (ptr->rchild!=NULL) )
        {
            struct node* succ=ptr->rchild;
            while(succ->lchild!=NULL)
                 succ=succ->lchild;
            ptr->info=succ->info;
            ptr->rchild=deleted(ptr->rchild,succ->info);
            if(shorter==TRUE)
                ptr=del_right_check(ptr,&shorter);
        }
        else
        {
            struct node* tmp=ptr;
            if(ptr->lchild!=NULL)
                ptr=ptr->lchild;
            else if(ptr->rchild!=NULL)
                ptr=ptr->rchild;
            else
                ptr=NULL;
            free(tmp);
            shorter=TRUE;
        }


    }
    return ptr;
};
void inorder(struct node* root)
{
    if(root==NULL)
       return;

    inorder(root->lchild);
    cout << root->info << " ";
    inorder(root->rchild);


}
int main()
{
    int n;
    struct node* root=NULL;
    while(1)
    {
    cout << "Enter your choice:" << endl;
    cout << "1.     Insertion"<< endl;
    cout << "2.     Deletion"<< endl;
    cout << "3.     Inorder traversal"<< endl;
    cout << "4.     Quit"<< endl;
    cin >> n;
    switch(n)
    {
      case 1:
          cout << "Enter the element you want to insert " << endl;
          int x;
          cin >> x;
          root=insert(root,x);
          break;
      case 2:
          cout << "Enter the element you want to delete " << endl;
          int y;
          cin >> y;
          root=deleted(root,y);
          break;

      case 3:
           inorder(root);
           cout << endl;
           break;
      case 4:
           exit(1);
           break;

      default:
           cout << "wrong choice" << endl;
           break;

    }
   }
    return 0;
}
