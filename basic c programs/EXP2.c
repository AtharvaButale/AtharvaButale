#include<stdio.h>
int main()
{
	int a,b;
	int sum,sub,mul;
	float div1,mod;

	printf("\nEnter value for a: ");
	scanf("%d",&a);

	printf("\nEnter value for b: ");
	scanf("%d",&b);

	sum = a + b;
	printf("\nAddition of a & b is: %d",sum);

	sub = a - b;
	printf("\nSubtraction of a & b is: %d",sub);

	mul = a * b;
	printf("\nMultiplication of a & b is: %d",mul);

	div1 = (float)a / b;
	printf("\nDivision of a & b is: %f",div1);

	mod = a % b;
	printf("\nRemainder after a/b is: %f",mod);
	return 0;
}
