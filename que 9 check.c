#include<stdio.h>
int f1(int ,int );
int main()
{
	int num,digit;
	printf("Enter a number:");
	scanf("%d",&num);
	printf("Enter a digit to be checked:");
	scanf("%d",&digit);
  int flag=f1(num,digit);
	if(flag==1)
	printf(" %d contain %d",num,digit);
	else
	printf(" %d does not contain %d",num,digit);
}
int f1(int a,int b)
{
	int rem,count=0;
	while(a>0)
	{
		rem=a%10;
		if(a==rem)
		{
		count=1;
		break;}
		a=a/10;
	}
	return count;
}