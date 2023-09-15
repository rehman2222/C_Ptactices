#include<stdio.h>

int main()
{
	char  x;
	printf("ENter a character");
	scanf("%c", &x);
	
	if(x>='A'&&x<='Z')
	printf("Upper case alphabet");
	
	else if(x>='a'&&x<='z')
	printf("Lower case alphabet");
	
	else if(x>='0'&&x<='9')
	printf("Digit");
	
	else
	printf("special character");
}
