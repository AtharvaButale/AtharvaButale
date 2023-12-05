//to study variables , constants and use of printf and scanf funuctions
#include<stdio.h>
int main()
{
    char ch = 's';
    int num1 = 45;
    float num2 =34.89;
    double num3 = 9.453276800;
    int a , b ,sum;
    printf("\n character = %c", ch);
    printf("\n Integer = %d", num1);
    printf("\n float number = %f",num2);
    printf("\n double number = %f",num3);
    printf("\n constants are %d \t %f", 78,90.45);

    //Enter all data using scanf
    printf("\n Enter character :");
    scanf("%c", &ch);
    printf("character is %c", ch);
    printf("\n Enter integer number :");
    scanf("%d",&num1);
    printf("\n number is %d",num1);
    printf("\n Enter float number :");
    scanf("%f",&num2);
    printf("\n Number is %f",num3);
    printf("\n Enter double number : ");
    scanf("%d", &num3);
    printf("\n Number is %f",num3);

    //Addition of two numbers
    printf("Enter a = \n");
    scanf("%d",&a);
    printf("Enter b = \n");
    scanf("%d",&b);
    sum = a + b;
    printf("\n Addition of %d and %d is %d",a,b,sum);
    return 0;
}
