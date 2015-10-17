#include<stdio.h>
#include<malloc.h>
main()
{
    struct node
    {
        int data;
        int v;
        struct node *next;
    };
    struct node *first=NULL,*current,*ptr,*ptr1,*temp,*temp1,*temp2;
    int c;
    while(1)
    {
        printf("\nMENU");
        printf("\n1.Insertion");
        printf("\n2.Formation of 'Y'");
        printf("\n3.Detection");
        printf("\n4.Exit");
        printf("\nEnter your choice-:");
        scanf("%d",&c);
        if(c==1)
        {
            printf("\nEnter the elements that will be forming the longer line of an 'Y'-:");
            if(first==NULL)
            {
                current=(struct node*)malloc(sizeof(struct node));
                printf("\nEnter 1st data i.e. head 1-:");
                scanf("%d",&current->data);
                current->next=NULL;
                current->v=0;
                first=current;
            }
            else
            {
                ptr=(struct node*)malloc(sizeof(struct node));
                printf("\nEnter the next data-:");
                scanf("%d",&ptr->data);
                ptr->next=NULL;
                ptr->v=0;
                current->next=ptr;
                current=ptr;
            }
        }
        if(c==2)
        {
            temp1=(struct node*)malloc(sizeof(struct node));
            temp2=(struct node*)malloc(sizeof(struct node));
            printf("\nEnter the 1st element for the shorter line i.e. the head 2-:");
            scanf("%d",&temp1->data);
            temp1->next=NULL;
            temp1->v=0;
            printf("\nEnter the next element for the shorter line-:");
            scanf("%d",&temp2->data);
            temp2->next=NULL;
            temp2->v=0;
            temp=first;
            temp=temp->next;
            temp1->next=temp;
            temp2->next=temp;
            printf("\nThe 'Y' is formed!");
            printf("\nThe value in head 1 is-:%d",first->data);
            printf("\nThe value in head 2 is-:%d",temp1->data);
        }
        if(c==3)
        {
            ptr1=first;
            while(ptr1!=NULL)
            {
                ptr1->v=1;
                ptr1=ptr1->next;
            }
            ptr1=temp1;
            while(ptr1->v!=1)
            {
                ptr1->v=1;
                ptr1=ptr1->next;
            }
            printf("\nHead 2 is pointing to the data after head 1 in the long line i.e.-:%d",ptr1->data);
            ptr1=temp2;
            while(ptr1->v!=1)
            {
                ptr1->v=1;
                ptr1=ptr1->next;
            }
            printf("\nThe remaining node of the shorter line is also pointing to data after head 1 i.e.-:%d",ptr1->data);
            printf("\nThe intersecting node is found and 'Y' is detected at the data-:%d",ptr1->data);
        }
        if(c==4)
            return;
    }
}
