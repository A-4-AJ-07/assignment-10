#include<stdio.h>
int natural(int);
int main()
{
	int n,a;
	printf("Enter the value of n:");
	scanf("%d",&n);
	a=natural(n);
	
}
natural(int a)
{
	int i;
	printf("First N natural number is:");
	for(i=1;i<=a;i++)
	{
		printf("%d\t",i);
	}
}