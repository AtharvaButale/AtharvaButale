

#include<stdio.h>
void main()
{
	int n;
	int i,sum=0;
	float avg;

	printf("Enter size of array: ");
	scanf("%d",&n);

	while(n<=0)
	{
		printf("\nPlease enter a positive value: ");
		scanf("%d",&n);
	}

	int a[n];

	printf("Enter Array Elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum = sum + a[i];
	}

	avg = sum/(float)n;

	printf("\nThe Sum of elements of array: %d",sum);
	printf("\nThe Average of elements of array: %.2f",avg);
}

