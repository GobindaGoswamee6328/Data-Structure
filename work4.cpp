
//4. Write a program to perform matrix addition between 3 matrices.


#include<iostream>
using namespace std;

int main()
{
	int i,j,rows,columns;

	printf("Enter number of rows & columns: ");
	scanf("%d%d",&rows,&columns);
	int a[rows][columns],b[rows][columns],c[rows][columns];

	printf("Enter first matrix:\n");
	for(i=0; i<rows; i++)
	{
		for(j=0; j<columns; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	printf("\nEnter second matrix:\n");
	for(i=0; i<rows; i++)
	{
		for(j=0; j<columns; j++)
		{
			scanf("%d",&b[i][j]);
		}
	}

	printf("\nEnter third matrix:\n");
	for(i=0; i<rows; i++)
	{
		for(j=0; j<columns; j++)
		{
			scanf("%d",&c[i][j]);
		}
	}

	printf("\nThe sum of three matrices will be:\n");
	for(i=0; i<rows; i++)
	{
		for(j=0; j<columns; j++)
		{
			printf("%d ",a[i][j]+b[i][j]+c[i][j]);
		}
		printf("\n");
	}
}
