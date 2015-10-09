#include<stdio.h>
int main()
{
	int i,j,m,n,a[10][10];
	printf("Please enter the no. of rows");
	scanf("%d",&m);
	printf("Please enter the no. of columns");
	scanf("%d",&n);
	printf("Please enter the elements");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
                {
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nYour input matrix is");
	for(i=0;i<m;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
		{
			printf("\t\t%d",a[i][j]);
		}
	}
	printf("\nThe result is");
	for(j=0;j<n;j++)
	{
		printf("\t%d",a[0][j]);
	}
	for(i=1;i<m;i++)
	{
		printf("\t%d",a[i][2]);
	}
	for(i=n-2;i>=0;i--)
	{
		printf("\t%d",a[2][i]);
	}
	for(i=0;i<n-1;i++)
	{
		printf("\t%d",a[1][i]);
	}
}
