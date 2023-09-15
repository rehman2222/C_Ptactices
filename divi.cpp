#include<stdio.h>

int main()
{
	int x;
	printf("Enter a number");
	scanf("%d", &x);
	
	if(x%4){
	
	printf("Divisible");
    }
    else
    {
    	printf("Not Divisible");
	}
	
	return 0;
}
