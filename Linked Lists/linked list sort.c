#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void traverse();
void insertend();
void deletebegin();
void sort();
struct node
{
	int info;
	struct node *next;
};
	struct node *start=NULL;
int main()
{
	int ch;
	printf("enter your choice:\n");
	while(1)
	{
	    printf("-------------------------------------")
		printf("1:inert at end\n2:traverse\n3:sorting\n4:delete at begin\n5:exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
		   case 1:
		   insertend();
		   break;
		   case 2:
		   traverse();
		   break;
		   case 3:
		   sort();
		   break;
		   case 4:
		   deletebegin();
		   break;
		   case 5:
		   exit(0);
		   break;
			default:
				printf("wrong choice\n");
		}
	}
}
void traverse()
{
	struct node *temp;
	if(start==NULL)
	{
		printf("list is empty\n");
	}
	else
	{
		temp=start;
		while(temp!=NULL)
		{
			printf("%d\t",temp->info);
			temp=temp->next;
		}
	}
printf("\n");
}
void insertend()
{
	
	int no;
	struct node *temp,*temp1;
	temp=(struct node*)malloc(sizeof(struct node));
	if(temp==NULL)
	{
		printf("memory not given\n");
	}
	else
	{
		printf("enter the no\n");
		scanf("%d",&no);
		temp->info=no;
		temp->next=NULL;
		if(start==NULL)
		{
			start=temp;
		}
		else
		{	
		temp1=start;
		while(temp1->next!=NULL)
		{
			temp1=temp1->next;
		}
		temp1->next=temp;
		}
	}
}
void deletebegin()
{
	struct node *temp;
	if(start==NULL)
	{
		printf("list is empty\n");
	}
	else
	{
		temp=start;
		start=temp->next;
		printf("deleted value=%d\n",temp->info);
		free(temp);
	}
}
void sort()
{
    struct node *ptr,*ptr1,*d1;int d;
    for(ptr=start;ptr->next!=NULL;ptr=ptr->next)
    {
        for(ptr1=ptr->next;ptr1!=NULL;ptr1=ptr1->next)
        {
            if(ptr->info > ptr1->info)
            {
              d=ptr->info;
              ptr->info=ptr1->info;
              ptr1->info=d;
            }
        }
    }
}
