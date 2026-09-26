#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter a dimension of two matrix:\n");
	scanf("%d",&n);
	printf("Enter equal dimension matrix %d x %d\n",n,n);
	int a[n][n],b[n][n],substraction[n][n];
	printf("Enter the first matrix:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the second matrix:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			substraction[i][j]=a[i][j]-b[i][j];
		}
	} 
	printf("The substraction two matrix is:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",substraction[i][j]);
		}
		printf("\n");	
	}
}
