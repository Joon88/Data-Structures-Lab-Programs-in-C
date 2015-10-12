#include<stdio.h>

main()
{
	int i,j,c,n,a[20],front=-1,rear=-1,ctr1=0;
	printf("\nEnter the size of the circular queue-:");
	scanf("%d",&n);
	while(1)
	{
		printf("\n1.INSERT");
		printf("\n2.DEQUEUE");
		printf("\n3.DISPLAY");
		printf("\n4.EXIT");
		printf("\nPlease enter your choice-:");
		scanf("%d",&c);
		if(c==1)
		{
		    if(front==-1 && rear==-1)
		    {
		        front=0;rear=0;
		    }
			else if(front==0 && rear==n)
			{
				printf("\nOverflow");return;
			}
			else if(front==n && rear==n)
			{
			    front=0;rear=0;
			}
            else if(rear==n)
			{
				rear=0;
			}
			else if(front!=0 && front==rear)
			{
				printf("\nOverflow");return;
			}

                    printf("\nEnter the elements-:");
					scanf("%d",&a[rear]);
					rear++;
					ctr1++;
		}
		if(c==2)
		{
			int x;
			if(front==-1)
			{
				printf("\nUnderflow");return;
			}
			else if(ctr1==0)
			{
				printf("\nUnderflow");return;
			}
			else if(front==n)
			{
			    front=0;
			}
				x=a[front];
				printf("\nThe deleted element is-:%d",x);
				front++;
				ctr1--;
		}
		if(c==3)
		{
			if(front==-1)
				printf("\nUnderflow");
            else if(ctr1==0)
            {
                printf("\nQueue is empty");
            }
			else if(rear>front)
			{
			    printf("\nThe present queue is-:");
			    for(i=front;i<rear;i++)
                    printf("%d",a[i]);
			}
			else
			{
			    printf("\nThe present queue is-:");
			    for(i=0;i<rear;i++)
                    printf("%d",a[i]);
                for(i=front;i<n;i++)
                    printf("%d",a[i]);
			}
		}
		if(c==4)
			return;
	}
}
