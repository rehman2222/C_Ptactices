#include<stdio.h>

int main()
{
	int num;
	printf("Enter a number");
	scanf("%d", &num);
	
	printf(num%7==0&&num%3==0?"divisible":"not divisible");
}
