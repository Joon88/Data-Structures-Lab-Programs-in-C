#include<stdio.h>
#include<malloc.h>
main()
{
     struct node
    {
        int data;
        struct node *next;
        struct node *previous;
    };
    struct node *first=NULL,*current,*ptr,*temp;
    int c;
    while(1)
    {
        printf("\nMENU");
        printf("\n1.Insertion");
        printf("\n2.Rotate and display");
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
                current->previous=NULL;
                first=current;
            }
            else
            {
                ptr=(struct node*)malloc(sizeof(struct node));
                printf("\nEnter the next data-:");
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
            printf("\nThe reversed list is-:");
            while(ptr!=NULL)
            {
                printf("\t%d",ptr->data);
                ptr=ptr->previous;
            }
        }
        if(c==3)
        {
            temp=first;
            printf("\nThe elements entered are-:");
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
