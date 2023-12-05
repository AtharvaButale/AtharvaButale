#include<stdio.h>
int main()
{
	int n;
	printf("Enter how many No. you want to input: ");
	scanf("%d",&n);
	
	int a[n], i;
	printf("Enter the Integers: ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int large = a[0], largePosition;	
	
	for(i=1;i<n;i++){
		if(large < a[i]){
			large = a[i];
		}
	}
	for(i=0;i<n;i++){
		if(large== a[i]){
			largePosition = i + 1;
		}
	}
	
	printf("\nThe Largest No. is: %d and its input position is: %d", large, largePosition);
}
