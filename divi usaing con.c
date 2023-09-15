#include<stdio.h>

int main()
{
	int x;
	printf("Enter a number");
	scanf("%d", &x);
	
	printf(x%10==0?"Divisible":"Not Divisible");
	return 0;
}
