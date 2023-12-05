// Experiment No.7 Q1
// Write a C program to Implement Matrix Addition, Subtraction and Multiplication using 2D array.

#include<stdio.h>
void main()
{
	int a[2][2], b[2][2], add[2][2], sub[2][2], mul[2][2];
	int i,j,k,sum=0;
	
	// Input First Matrix
	printf("Enter First Matrix Elements: ");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	// Input Second Matrix
	printf("Enter Second Matrix Elements: ");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	// Matrix Addition
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			add[i][j] = a[i][j] + b[i][j];
		}
	}
	
	// Matrix Subtraction
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			sub[i][j] = a[i][j] - b[i][j];
		}
	}
	
	// Matrix Multiplication
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<2;k++)
			{
				sum += a[i][k]*b[k][j];
			}
			mul[i][j]=sum;
			sum=0;
		}
	}
	
	//Printing Addition
	printf("\nAddition of Matrix is: \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",add[i][j]);
		}
		printf("\n");
	}
	
	//Printing Subtraction
	printf("\nSubtraction of Matrix is: \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",sub[i][j]);
		}
		printf("\n");
	}
	
	//Printing Multiplication
	printf("\nMultiplication of Matrix is: \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",mul[i][j]);
		}
		printf("\n");
	}
}
