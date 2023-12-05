#include<stdio.h>
int main()
{
	float p, r, n;
	float si;
	printf("Enter the principle amount: ");
	scanf("%f",&p);
	printf("Enter the rate of interest in percentage: ");
	scanf("%f",&r);
	printf("Enter the no. of years: ");
	scanf("%f",&n);
	
	r = r /100.0;
	
	si = (p*r*n)/100;
	
	printf("Simple interest = %.2f",si);
}
