#include<stdio.h>

float area(float);
int main()
{
	
	float a,r;
	printf("Radius of circle:");
	scanf("%f",&r);
	a=area(r);
	printf("%f is the area",a);
}
float area(float a)
{
	float area;
	area=3.14*a*a;
	return area;
}