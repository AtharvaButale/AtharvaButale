#include<stdio.h>
int main()
{
	int age;
	printf("Enter your age: ");
	scanf("%d",&age);
	if(age >= 18){
		printf("\nCongratulation! You are eligible for casting your vote.");
	}
	else if(age < 18){
		printf("\nOops! You are not eligible for casting your vote.");
	}
	else{
		printf("\nInvalid Input");
	}
}
