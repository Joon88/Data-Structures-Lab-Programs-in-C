//MERGE TWO SORTED LIST
#include<stdio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node *next;//*previous;
}*head1=NULL,*current1,*head2=NULL,*current2,*head3=NULL,*current3,*ptr1,*ptr2,*ptr3,*temp1,*temp2,*temp3;
void insert1()
{
    if(head1==NULL)
    {
        current1=(struct node*)malloc(sizeof(struct node));
        printf("\nEnter data-:");
        scanf("%d",&current1->data);
        current1->next=NULL;
        head1=current1;
    }
    else
    {
        ptr1=(struct node*)malloc(sizeof(struct node));
        printf("\nEnter data-:");
        scanf("%d",&ptr1->data);
        ptr1->next=NULL;
        current1->next=ptr1;
        current1=ptr1;
    }
}
void insert2()
{
    if(head2==NULL)
    {
        current2=(struct node*)malloc(sizeof(struct node));
        printf("\nEnter data-:");
        scanf("%d",&current2->data);
        current2->next=NULL;
        head2=current2;
    }
    else
    {
        ptr2=(struct node*)malloc(sizeof(struct node));
        printf("\nEnter data-:");
        scanf("%d",&ptr2->data);
        ptr2->next=NULL;
        current2->next=ptr2;
        current2=ptr2;
    }
}
void display()
{
    temp1=head1;
    printf("\nThe 1st sorted list is-:");
    while(temp1!=NULL)
    {
        printf("\t%d",temp1->data);
        temp1=temp1->next;
    }
    temp2=head2;
    printf("\nThe 2nd sorted list is-:");
    while(temp2!=NULL)
    {
        printf("\t%d",temp2->data);
        temp2=temp2->next;
    }
}
void merge(int x)
{
    if(head3==NULL)
    {
        current3=(struct node*)malloc(sizeof(struct node));
        current3->data=x;
        current3->next=NULL;
        head3=current3;
    }
    else
    {
        ptr3=(struct node*)malloc(sizeof(struct node));
        ptr3->data=x;
        ptr3->next=NULL;
        current3->next=ptr3;
        current3=ptr3;
    }//printf("%d",current3->data);
}

main()
{
    int c;
    while(1)
    {
        printf("\n1.Insert 1st sorted list");
        printf("\n2.Insert 2nd sorted list");
        printf("\n3.Display");
        printf("\n4.Merge");
        printf("\nEnter your choice-:");
        scanf("%d",&c);
        if(c==1)
        {
            insert1();
        }
        if(c==2)
        {
            insert2();
        }
        if(c==3)
        {
            display();
        }
        if(c==4)
        {
            temp1=head1;
            temp2=head2;
            while(temp1!=NULL && temp2!=NULL)
            {
                if((temp1->data) < (temp2->data))
                {
                    merge(temp1->data);
                    temp1=temp1->next;
                }
                else
                {
                    merge(temp2->data);
                    temp2=temp2->next;
                }
                //temp1=temp1->next;
                //temp2=temp2->next;
            }
            if(temp1==NULL)
            {
                while(temp2!=NULL)
                {
                    merge(temp2->data);
                    temp2=temp2->next;
                }
            }
            else if(temp2==NULL)
            {
                while(temp1!=NULL)
                {
                    merge(temp1->data);
                    temp1=temp1->next;
                }
            }
            temp3=head3;
            while(temp3!=NULL)
            {
                printf("\t%d",temp3->data);
                temp3=temp3->next;
            }
            return;
        }
    }
}
