//CIRCULAR LINKED LIST
#include<stdio.h>
#include<malloc.h>

main()
{
	struct node
	{
		int data;
		struct node *next;
	};
	struct node *head=NULL,*current,*ptr,*temp,*temp1,*ptr1,*ptr2,*ptr3;
	int c,q;
	while(1)
	{
		printf("\n1.Insert");
		//printf("\n2.Display");
		printf("\n3.Display element wise");
        printf("\n4.Delete position wise");
        printf("\n5.Delete value wise");
		printf("\n6.Exit");
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
				head=current;
			}
			else
			{
				ptr=(struct node*)malloc(sizeof(struct node));
				printf("\nEnter the next data-:");
				scanf("%d",&ptr->data);
				ptr->next=NULL;
				current->next=ptr;
				current=ptr;
			}
			temp1=head;
			current->next=head;
		}
		/*if(c==2)
		{
			temp=head;
			printf("\nThe elements are-:");
			while(temp->next!=head)
			{
				printf("\t%d",temp->data);
				temp=temp->next;
			}
			printf("\t%d",temp->data);
			temp1=head;
		}*/
		if(c==3)
		{
			printf("\nThe element is-:");
			printf("%d",temp1->data);
			temp1=temp1->next;
		}
		if(c==4)
		{
		    int ctr=1;
		    ptr1=head;
            printf("\nWhich node u wanna delete....give the serial number-:");
            scanf("%d",&q);
            if(q==1)
            {
                head=head->next;
                ptr->next=head;
                printf("\nThe deleted element is-:%d",ptr1->data);
                ptr1->next=NULL;
                free(ptr1);
            }
            else
            {
                while(ctr!=q-1)
                {
                    ptr1=ptr1->next;
                    ctr++;
                }
                ptr2=ptr1->next;
                ptr3=ptr2->next;
                printf("\nThe deleted element is-:%d",ptr2->data);
                ptr1->next=ptr3;
                ptr2->next=NULL;
                free(ptr2);
                temp1=head;
            }
		}
		if(c==5)
		{
		    int x;
		    ptr1=head;
		    ptr2=current;
		    printf("\nEnter the data you wanna delete-:");
		    scanf("%d",&x);
		    while(ptr1->data!=x)
		    {
		        ptr1=ptr1->next;
		        ptr2=ptr2->next;
		    }
		    ptr2->next=ptr1->next;
		    ptr1->next=NULL;
		    free(ptr1);
		    printf("\nData deleted");
		    temp1=head;
		}
		if(c==6)
			return;
	}
}
