#include<stdio.h>

int main()
{
	int a;
	printf("Enter a number");
	scanf("%d", &a);
	
	if(a%2)
	{
		printf("odd");
	}
	else
	{
		printf("Even");
	}
}
