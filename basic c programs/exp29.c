#include<stdio.h>
int main()
{
	int n, i;
	printf("Specify the no. by which you want to divide: ");
	scanf("%d",&n);
	printf("\nThe numbers which lie between 1 and 100 and which are divisible by %d then remainder is 3 are:\n",n);

	for(i=1;i<=100;i++){
		if( i%n == 3 ){
			printf("%d\n",i);
		}
	}
	
	return 0;
}
