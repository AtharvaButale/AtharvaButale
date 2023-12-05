#include<stdio.h>
int main ()
{
    //Circle
    float r,Area1,Per1;
    printf("Enter the value of radius = \n");
    scanf("%f",&r);
    Area1 = 3.14 * r * r;
    Per1 = 2 * 3.14 * r;
    printf("Area of the circle with radius %f is %f\n",r,Area1);
    printf("The circumference of the circle with radius %f is %f\n",r,Per1);

     //Triangle
     int h,b,side1,side2,side3,Per2;
     float Area2;
     printf("Enter the values of height and base = \n");
     scanf("%d%d",&h,&b);
     Area2 = 0.5 * h * b;
     printf("Area of Triangle with height %d and base %d is %f\n",h,b,Area2);
     printf("Enter the values for sides of triangle =\n");
     scanf("%d%d%d",&side1,&side2,&side3);
     Per2 = side1 + side2 + side3;
     printf("The perimeter of the triangle with sides %d , %d and %d is %d\n",side1,side2,side3,Per2);

     //Rectangle
     int l,br,Area3,Per3;
     printf("Enter The values of length and breadth = \n");
     scanf("%d%d",&l,&br);
     Area3 = l * br;
     Per3 = 2*(l + br);
     printf("Area of the rectangle with length %d and breadth %d is %d\n",l,br,Area3);
     printf("Perimeter of rectangle with length %d and breadth %d is %d\n",l,br,Per3);

    return 0;
}
