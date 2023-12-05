#include<stdio.h>
int main()
{
	int height = 7, width = 5;
	int peri,area;
	peri = 2*(height + width);
	area = height * width;
	printf("Perimeter = %d\nArea = %d",peri,area);
	
	return 0;
}
