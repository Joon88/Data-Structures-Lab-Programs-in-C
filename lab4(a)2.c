#include<stdio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node *next;
}*head=NULL,*current,*first=NULL,*temp,*temp1,*ptr,*ptr1,*rslt=NULL,*rslt1,*rslt2,*p,*q,*r;
int w;
void result(int m,int n)
{
    int z,a,b,d;
    z=n+m;

    if(rslt==NULL)
    {
        rslt1=(struct node*)malloc(sizeof(struct node));
        rslt1->data=(z%10);
        rslt1->next=NULL;
        rslt=rslt1;
        b=z/10;

    }
    else
    {
        rslt2=(struct node*)malloc(sizeof(struct node));
        rslt2->data=(z%10)+b;
        rslt2->next=NULL;
        rslt2->next=rslt1;
        rslt1=rslt2;
        b=z/10;
        w=b;
    }


}
main()
{

    int c,ctr1=0,ctr2=0,x=0,count1=1,count2=1;
    while(1)
    {
        printf("\nMENU");
        printf("\n1.Push the first number");
        printf("\n2.Push the second number");
        printf("\n3.Display the entered elements");
        printf("\n4.Result");
        printf("\nPlease enter your choice-:");
        scanf("%d",&c);
        if(c==1)
        {
            if(head==NULL)
            {
                current=(struct node*)malloc(sizeof(struct node));
                printf("\nEnter 1st digit-:");
                scanf("%d",&current->data);
                current->next=NULL;
                head=current;
            }
            else
            {
                ptr=(struct node*)malloc(sizeof(struct node));
                printf("\nEnter next digit-:");
                scanf("%d",&ptr->data);
                ptr->next=NULL;
                ptr->next=current;
                current=ptr;
            }
            p=current;
            while(p->next!=NULL)
            {
                p=p->next;
                count1++;
            }
        }
        if(c==2)
        {
            if(first==NULL)
            {
                temp=(struct node*)malloc(sizeof(struct node));
                printf("\nEnter 1st element");
                scanf("%d",&temp->data);
                temp->next=NULL;
                first=temp;
            }
            else
            {
                ptr1=(struct node*)malloc(sizeof(struct node));
                printf("\nEnter next element");
                scanf("%d",&ptr1->data);
                ptr1->next=NULL;
                ptr1->next=temp;
                temp=ptr1;
            }
            p=temp;
            while(p->next!=NULL)
            {
                p=p->next;
                count2++;
            }
        }
        if(c==3)
        {
            int j;
            count1--;
            printf("\nThe 1st number is-:");
            while(count1!=0)
            {
                j=0;
                count1--;
                q=current;
                while(j!=count1)
                {
                    q=q->next;
                    j++;
                }
            printf("\t%d",q->data);
            }

            int k;
            count2--;
            printf("\nThe 2nd number is-:");
            while(count2!=0)
            {
                k=0;
                count2--;
                q=temp;
                while(k!=count2)
                {
                    q=q->next;
                    k++;
                }
            printf("\t%d",q->data);
            }

        }
        if(c==4)
        {
            while(ptr!=NULL&&ptr1!=NULL)
            {
                result(ptr->data,ptr1->data);
                ptr=ptr->next;
                ptr1=ptr1->next;
                x++;
            }
            if(ctr1=ctr2)
                result(head->data,first->data);
            else if(ctr1>ctr2)
            {
                while(x!=ctr1)
                {
                    result(ptr->data,0);
                    x++;
                }
            }
            else if(ctr2>ctr1)
            {
                while(x!=ctr2)
                {
                    result(0,ptr1->data);
                    x++;
                }
            }

            printf("\t%d",w);
            while(rslt1!=NULL)
            {
                printf("\t%d",rslt1->data);
                rslt1=rslt1->next;
            }

            return;
        }
    }
}


