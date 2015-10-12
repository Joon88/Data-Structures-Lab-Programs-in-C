#include<stdio.h>

main()
{
	int i,j,n,c,front=-1,rear=-1,a[20];
	printf("\nEnter the size of the queue-:");
		scanf("%d",&n);
	while(1)
	{
		printf("\n1.ENQUEUE");
		printf("\n2.DEQUEUE");
		printf("\n3.EXIT");
		printf("\nEnter your choice-:");
		scanf("%d",&c);
		if(c==1)
		{
			if(rear==n)
				printf("\nOverflow");
			else if(front==-1)
			{	
				printf("\nEnter the elements-:");
				front=0;
				rear=0;
				for(rear=0;rear<n;rear++)
				{
					scanf("%d",&a[rear]);			
				}
			}

		}
		if(c==2)
		{
			int x;
			if(front==-1 || front==rear)
			{
				printf("\nUnderflow");
			}
			else
			{
				x=a[front];	
				front++;
				printf("\nThe deleted elementis-:%d",x);
				printf("\nThe leftout array is-:");
				for(i=front;i<n;i++)
				{
					printf("\t%d",a[i]);
				}	
			}
		}
		if(c==3)
			return;
	}
}
