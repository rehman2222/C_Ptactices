#include<stdio.h>

int main()
{

   char x;
   printf("-----------------------------");
   printf("Enter a character:");
   scanf("%c", &x);

   if(x>='a' && x<='z'){
    printf("samller alphabet");
   }
   else if(x>='A' && x<='z'){
    printf("larger alphabet");
   }
   else if(x>='0' && x<='9'){
    printf("Digit");
   }
   else{
    printf("Special character");
   }




















    return 0;
}