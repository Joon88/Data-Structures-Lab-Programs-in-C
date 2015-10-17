#include<stdio.h>
#include<malloc.h>
main()
{
    struct node
    {
        int data;
        struct node *next;
    };
    struct node *first=NULL,*current,*ptr,*temp,*temp1;
    int c,x;
    while(1)
    {
        printf("\nMENU");
        printf("\n1.Insertion");
        printf("\n2.Swap");
        printf("\n3.Display");
        printf("\n4.Exit");
        printf("\nPlease enter your choice-:");
        scanf("%d",&c);
        if(c==1)
        {
             if(first==NULL)
            {
                current=(struct node*)malloc(sizeof(struct node));
                printf("\nEnter 1st data-:");
                scanf("%d",&current->data);
                current->next=NULL;
                first=current;
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
        }
        if(c==2)
        {
            temp=first;
            while(temp!=NULL&&temp->next!=NULL)
            {
                temp1=temp->next;
                x=temp->data;
                temp->data=temp1->data;
                temp1->data=x;
                temp1=temp1->next;
                temp=temp1;
            }
            printf("\nSwapping daone!");
        }
        if(c==3)
        {
            temp=first;
            printf("\nThe elements are-:");
            while(temp!=NULL)
            {
                printf("\t%d",temp->data);
                temp=temp->next;
            }
        }
        if(c==4)
            return;
    }
}
