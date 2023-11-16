/*project 01
  This program take the value from the user and then revered it. 
  Aurthor Abdur rehman
  */
#include<stdio.h>

int main()
{
    int number, reversal = 0;
    //  prompt the value from the user
    printf("Enter a two digit number :\n");
    scanf("%d",&number);

    while (number >0){
        int last_digit =  number % 10;
        reversal = reversal * 10 + last_digit;
        number /= 10;
    }
    // The reveral number
      printf("The revered of %d\n",reversal);    
    
    return 0;
}