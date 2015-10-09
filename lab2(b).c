#include<stdio.h>
main()
{
	int i,j,m,n,a[10][10];
	printf("Enter the number of rows");
	scanf("%d",&m);
	printf("Enter the no. of columns");
	scanf("%d",&n);
	printf("Please enter the elements");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
                {
			scanf("%d",&a[i][j]);
		}
	}
	printf("The input matrix is");
	for(i=0;i<m;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
                {
			printf("\t\t%d",a[i][j]);
		}
	}
	printf("\nThe resultant matrix is\n");
	for(i=0;i<n;i++)
	{
		for(j=m-1;j>=0;j--)
		{
			printf("%d\t",a[j][i]);
		}
		printf("\n");
	}
}
