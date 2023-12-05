#include<stdio.h>
int main()
{
	int roll;
	char name[20];
	float phy, chem, ca, sum, per;
	
	printf("\nInput the Roll Number of the student: ");
	scanf("%d",&roll);
	printf("\nInput the Name of the Student: ");
	scanf("%s",&name);	
	printf("\nInput the marks of Physics, Chemistry and Computer Application: ");
	scanf("%f%f%f", &phy, &chem, &ca);
	
	sum = phy + chem + ca;
	
	per = (sum/300.0)*100;
	
	printf("\nRoll No: %d",roll);
	printf("\nName of Student: %s",name);
	printf("\nMarks in Physics: %.2f",phy);
	printf("\nMarks in Chemistry: %.2f",chem);
	printf("\nMarks in Computer Application: %.2f",ca);
	printf("\nTotal Marks = %.2f",sum);
	printf("\nPercentage = %.2f",per);
	
	return 0;
}
