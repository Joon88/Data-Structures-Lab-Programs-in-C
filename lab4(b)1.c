#include<stdio.h>
#include<malloc.h>

main()
{
    struct node
    {
        int data;
        struct node *next;
    };

    struct node *head=NULL,*current,*temp,*temp1,*temp2,*ptr;
    int c,mid,count=1,x;
    while(1)
    {
        printf("\nMENU");
        printf("\n1.Insertion");
        printf("\n2.Move");
        printf("\n3.Display");
        printf("\n4.Exit");
        printf("\nPlease enter your choice-:");
        scanf("%d",&c);
        if(c==1)
        {
            if(head==NULL)
            {
                current=(struct node*)malloc(sizeof(struct node));
                printf("\nEnter 1st element");
                scanf("%d",&current->data);
                current->next=NULL;
                head=current;
            }
            else
            {
                ptr=(struct node*)malloc(sizeof(struct node));
                printf("\nEnter next element");
                scanf("%d",&ptr->data);
                ptr->next=NULL;
                current->next=ptr;
                current=ptr;
            }
        }
        if(c==2)
        {
            int ctr=1;
            temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
                ctr++;
            }
            mid=ctr/2;
            temp=head;
            while(mid!=1)
            {
                temp=temp->next;
                mid--;
            }
            temp1=temp->next;
            x=temp1->data;
            temp1->data=temp->data;
            temp->data=x;
            printf("\nReversal done");
        }
        if(c==3)
        {
            temp2=head;
            while(temp2!=NULL)
            {
                printf("\t%d",temp2->data);
                temp2=temp2->next;
            }
        }
        if(c==4)
            return;
    }
    getch();
}
