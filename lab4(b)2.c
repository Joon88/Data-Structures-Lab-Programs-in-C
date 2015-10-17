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
    struct node *first=NULL,*temp1,*current,*temp,*ptr;
    int c,n,a,ctr=1;
    while(1)
    {
        printf("\nMENU");
        printf("\n1.Insert");
        printf("\n2.Loop");
        printf("\n3.Detection");
        printf("\n4.Exit");
        printf("\nPlease enter you choice-:");
        scanf("%d",&c);
        if(c==1)
        {
            if(first==NULL)
            {
                current=(struct node*)malloc(sizeof(struct node));
                printf("\nEnter 1st data-:");
                scanf("%d",current->data);
                current->next=NULL;
                current->v=0;
                first=current;
            }
            else
            {
                ptr=(struct node*)malloc(sizeof(struct node));
                printf("\nEnter the next data-:");
                scanf("%d",ptr->data);
                ptr->next=NULL;
                ptr->v=0;
                current->next=ptr;
                current=ptr;
            }
        }
        if(c==2)
        {
            printf("\nDo you want to make a loop...press 1 if yes...and 0 otherwise-:");
            scanf("%d",&n);
            if(n==0)
                return;
            if(n==1)
            {
                printf("To which node do you want to link the last node-:");
                scanf("%d",&a);
                temp=first;
                while(ctr!=a)
                {
                    temp=temp->next;
                    ctr=ctr++;
                }
                ptr->next=temp;    //check for current->next
                printf("\nLoop formed!");
                printf("\nNow you cannot insert any other node!");
            }

        }
        if(c==3)
        {
            temp1=first;
            while((temp1->v!=1)&&(temp1!=NULL))
            {
                temp1->v=1;
                temp1=temp1->next;
                //temp->v=1;
            }
            if(temp1->v==1)
            {
                printf("\nLoop found!");
            }
            else if(temp1==NULL)
            {
                printf("\nNo loop exists!");
            }
            return;
        }
        if(c==4)
        {
            return;
        }
    }
}
