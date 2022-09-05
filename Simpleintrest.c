#include<stdio.h>
float simple(float ,float ,float);
int main()
{
	float p,r,t,total;
	printf("\nEnter the value of amount:");
	scanf("%f",&p);
	printf("\nEnter the value of rate of interest:");
	scanf("%f",&r);
	printf("\nEnter the time in years:");
	scanf("%f",&t);
	total=simple(p,r,t);
	printf("%f is the amont of interest",total);
}
float simple(float a,float b,float c)
{
	float total;
	total=a*b*c/100;
	return total;
}