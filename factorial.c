#include<stdio.h>
int factorial(int);
int main()
{
	int num,f;
	printf("Enter a number for factorial:");
	scanf("%d",&num);
	f=factorial(num);
	printf("%d is the factorial of given number.",f);
}
int factorial(int f)
{   int fac=1;
	while(f>0)
	{
		fac=fac*f;
		f--;
	}
	return fac;
}