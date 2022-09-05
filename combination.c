#include<stdio.h>
int combination(int ,int );
int factorial(int );
int main()
{
	int n,r,total;
	printf("\nEnter the value of total no. items(n):");
	scanf("%d",&n);
	printf("\nEnter the value of total no. selection(r):");
	scanf("%d",&r);
	total=combination(n,r);
	printf("\n%d is the total no. of selection",total);
}
int combination(int a,int b)
{
	int f1=factorial(a);
	int f2=factorial(b);
	int f3=factorial(a-b);
	return f1/f2/f3;
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