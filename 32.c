#include<stdio.h>

int main()
{
	int num;
	printf("Enter a Number");
	scanf("%d", &num);
	
	if(num%3==0&&num%2==0)
	{
		printf("divisible");
	}
	else
	{
		printf("Not divisible");
	}
}
