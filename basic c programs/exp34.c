#include<stdio.h>
#include<string.h>
int main()
{
	char fullName[50], dob[50];
	long int mob;
	
	printf("Enter your full name: ");
	//scanf("%[^\n]s", fullName); 
	gets(fullName);
	
	printf("\nEnter your date of birth: ");
	//scanf("%[^\n]s", dob);
	gets(dob);
	
	printf("\nEnter Mobile No.: ");
	scanf("%ld",&mob);
	
	printf("\nName: %s",fullName);
	printf("\nDOB: %s",dob);
	printf("\nMobile: 99-%ld",mob);
	
	return 0;
}
