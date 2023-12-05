

#include<stdio.h>
void main()
{
	int a[5];
	int i,large,small;

	printf("Enter Array Elements: ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}

	small = a[0];
	for(i=1;i<5;i++)
	{
		if(small > a[i])
		{
			small = a[i];
		}
	}

	large = a[0];
	for(i=1;i<5;i++)
	{
		if(large < a[i])
		{
			large = a[i];
		}
	}
	printf("\nThe Smallest elements of array: %d",small);
	printf("\nThe Largest elements of array: %d",large);
}

