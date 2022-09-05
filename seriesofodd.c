#include<stdio.h>
int odd(int);
int main()
{
	int n;
	printf("Enter the number of terms:");
	scanf("%d",&n);
	
	odd(n);
	
}
int odd(int n)
{
	int i,count;
	i=1;
	for(count=1;count<=n;count++,i++)
	{
		printf("%d",i);
		i+2;
	}
}