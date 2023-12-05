#include<stdio.h>
int main()
{
	float cms, inch;
	printf("Enter the value in cms: ");
	scanf("%f",&cms);
	
	inch = cms / 12.0;
	printf("The value in inches is %.3f",inch);
	
	return 0;
}
