#include<stdio.h>
int check(int);
int main()
{
	int num,a;
	printf("Enter the number to be check:");
	scanf("%d",&num);
	
	a=check(num);
	if(a==1)
	printf("\nEven");
	else
	printf("\nOdd");
}
int check(int n)
{
	if(n%2==0)
	return 1;
	else
	return 0;
}