//DOUBLY LINKED LIST
#include<stdio.h>
#include<malloc.h>

main()
{
	struct node
	{
		int data;
		struct node *next,*previous;
	};
	struct node *head=NULL,*t1,*t2,*current,*ptr,*temp,*temp1,*ptr1,*ptr2,*ptr3;
	int c;
	while(1)
	{
		printf("\n1.Insert");
		printf("\n2.Display");
		printf("\n3.Delete");
		printf("\n4.Exit");
		printf("\nPlease enter your choice-:");
		scanf("%d",&c);
		if(c==1)
		{
			if(head==NULL)
			{
				current=(struct node*)malloc(sizeof(struct node));
				printf("\nEnter 1st data-:");
				scanf("%d",&current->data);
				current->next=NULL;
				current->previous=NULL;
				head=current;
			}
			else
			{
				ptr=(struct node*)malloc(sizeof(struct node));
				printf("\nEnter next data-:");
				scanf("%d",&ptr->data);
				ptr->next=NULL;
				ptr->previous=NULL;
				current->next=ptr;
				ptr->previous=current;
				current=ptr;
			}
		}
		if(c==2)
		{
			temp=head;
			printf("\nThe entered elements in real order is-:");
			while(temp!=NULL)
			{
				printf("\t%d",temp->data);
				temp=temp->next;
			}
			printf("\nThe entered elements in reversed order is-:");
			temp1=current;
			while(temp1!=NULL)
			{
				printf("\t%d",temp1->data);
				temp1=temp1->previous;
			}
		}
		if(c==3)
		{
		    int x,flag=0;
		    printf("\nPlease enter the data you wanna delete-:");
		    scanf("%d",&x);
		    ptr1=head;
		    /*while(ptr1!=NULL)
		    {
		        if(ptr1->data=x)
                    flag=1;
                ptr1=ptr1->next;
		    }
		    if(flag==0)
		    {
                printf("\nThe number is not found!");
                return;
		    }
		    ptr1=head;*/
		    if(head==current)
		    {
		        printf("\nThis is the last element");
		        free(head);
		        free(current);
		        free(ptr);
		        free(ptr1);
		        printf("\nNo more elements are left");
		    }
		    else
		    {
                if(x==head->data)
                {
                    head=head->next;
                    head->previous=NULL;
                    ptr1->next=NULL;
                    free(ptr1);
                    printf("\nData deleted");
                }
                else if(x==current->data)
                {
                    t2=current;
                    t1=ptr;
                    current=current->previous;
                    ptr=ptr->previous;
                    current->next=NULL;
                    ptr->next=NULL;
                    t2->previous=NULL;
                    t1->previous=NULL;
                    free(t2);
                    free(t1);
                    printf("\nElement deleted");
                }
                else
                {
                    while(ptr1->data!=x)
                    {
                        ptr1=ptr1->next;
                    }
                    ptr2=ptr1->previous;
                    ptr3=ptr1->next;
                    ptr2->next=ptr3;
                    ptr3->previous=ptr2;
                    ptr1->next=NULL;
                    ptr1->previous=NULL;
                    free(ptr1);
                    printf("\nData deleted");
                }
            }
		}
		if(c==4)
			return;
	}
}

