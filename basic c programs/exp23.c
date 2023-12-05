#include<stdio.h>
int main()
{
	int i;
	printf("All even Numbers between 1 to 50 is:\n");
	for(i=1;i<=50;i++){
		if(i%2==0){
			printf("%d ",i);
		}
	}
	
	return 0;
}
