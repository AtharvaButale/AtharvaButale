#include<stdio.h>
int main()
{
	int num[10];
	int i, positive = 0, negative = 0;
	printf("Enter the Array Elements: ");
	for(i=0;i<10;i++){
		scanf("%d",&num[i]);
	}
	for(i=0;i<10;i++){
		if(num[i]<0){
			++negative;
		}
		else{
			++positive;
		}
	}
	printf("\nThe no. of Positive no. in Array is: %d", positive);
	printf("\nThe no. of Negative no. in Array is: %d", negative);
	
	return 0;
}
