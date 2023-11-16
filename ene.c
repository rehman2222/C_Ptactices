#include<stdio.h>

int main()
{
    int d1,d2,d3,d4,d5,d6,d7,d8,d9,d10,d11,d12;

    printf("Enter the first 12 digit of an EAN:  ");
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d",&d1,&d2,&d3,&d4,&d5,&d6,&d7,&d8,&d9,&d10,&d11,&d12);

    int Even,odd;
    Even = d2 + d4 + d6 + d8 + d10 + d12;
    odd = d1 + d3 + d5 + d7 + d9 + d11;
    Even *= 3 + odd;
    
    int total = Even * 3 + odd; 
    total -= 1;

    int reminder;
    reminder = total %10;
    int check_digit = 9 - reminder;

    printf("Check Digit: ",check_digit);
}
