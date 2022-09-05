#include<stdio.h>
void pfactor(int);
int main()
{
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	pfactor(num);
}
void pfactor(int n)
{
	int i,j,flag=0;
	printf("All prime factor of %d is:",n);
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
		{
			for(j=2;j<i;j++)
			{
				if(i%j==0)
				{
					flag=1;
					break;
				}
				else
				flag=0;
			}
			if(flag==0)
			printf("%d\t",i);
		}
	}
}