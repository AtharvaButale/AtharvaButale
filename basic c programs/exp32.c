#include<stdio.h>
int main()
{
	float a, b; 
	int choice;
	
	do{
		printf("\n\nEnter 1 for Addition.");
		printf("\nEnter 2 for Subtraction.");
		printf("\nEnter 3 for Multiplication.");
		printf("\nEnter 4 for Division.");
		printf("\nEnter 5 for Exit.");
		printf("\nEnter your choice: ");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				printf("Enter first number: ");
				scanf("%f", &a);
				printf("Enter second number: ");
				scanf("%f", &b);
				float add = a + b;
				printf("The Addition of %.2f and %.2f is: %.2f", a, b, add);
				continue;
			
			case 2:
				printf("Enter first number: ");
				scanf("%f", &a);
				printf("Enter second number: ");
				scanf("%f", &b);
				float sub = a - b;
				printf("The Subtraction of %.2f and %.2f is: %.2f", a, b, sub);
				continue;
			
			case 3:
				printf("Enter first number: ");
				scanf("%f", &a);
				printf("Enter second number: ");
				scanf("%f", &b);
				float mul = a * b;
				printf("The Multiplication of %.2f and %.2f is: %.2f", a, b, mul);
				continue;
			
			case 4:
				printf("Enter first number: ");
				scanf("%f", &a);
				printf("Enter second number: ");
				scanf("%f", &b);
				if(b==0){
					printf("We cant divide by 0.");
					continue;
				}
				else{
					int div1 = a / b;
					printf("The Division of %.2f and %.2 is: %.2f", a, b, div1);
				}
				continue;
			
			case 5:
				exit(0);
				
			default:
				printf("Please enter valid input.");
				continue;	
		}
	}while(1);
	
	return 0;
}
