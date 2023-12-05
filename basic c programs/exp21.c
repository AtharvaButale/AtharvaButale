#include<stdio.h>
int main()
{
	int num[5];
	int i, sum=0;
	printf("Enter the elements of Array: ");
	for(i=0;i<5;i++){
		scanf("%d",&num[i]);
	}
	for(i=0;i<5;i++){
		if(num[i]%2 != 0){
			sum = sum + num[i];
		}
	}
	printf("\nThe sum of all odd values: %d",sum);
	
	return 0;
}
