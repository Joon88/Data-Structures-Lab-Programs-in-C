#include<stdio.h>
#include<malloc.h>
main()
{
    struct node
    {
        int data;
        struct node *next;
    };

    struct node *head=NULL,*current,*temp,*temp1,*temp2,*ptr,*ptr1;
    int c,i,ctr=1,count;
    while(1)
    {
        printf("\nMENU");
        printf("\n1.Push");
        printf("\n2.Pop");
        printf("\n3.Display");
        printf("\n4.Middle element");
        printf("\n5.Reversal");
        printf("\n6.Exit");
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
            //ctr=1;
            temp1=head;
            while(temp1->next!=NULL)
            {
                temp1=temp1->next;
                ctr++;
            }
        }
        if(c==2)
        {
                temp=head;
                head=head->next;
                temp->next=NULL;
                free(temp);
                printf("Element deleted");
                ctr--;

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
        {
            /*ctr=1;
            temp1=head;
            while(temp1->next!=NULL)
            {
                temp1=temp1->next;
                ctr++;
            }*/
            temp1=head;
            for(i=1;i<ctr/2;i++)
            {
                temp1=temp1->next;
            }
            printf("\nThe middle element is-:%d",temp1->data);
        }
        if(c==5)
        {
            int j;
            ctr--;
            //ptr1=head;
            printf("\nThe reversed array is-:");
            //for(i=ctr-1;i>0;i--)
            while(ctr!=0)
            {
                j=0;
                ctr--;
                ptr1=head;
                while(j!=ctr)
                {
                    ptr1=ptr1->next;
                    j++;
                }
            printf("\t%d",ptr1->data);
            }
        }
        if(c==6)
            return;
    }
    }


