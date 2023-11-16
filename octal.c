/*project 4
   In this program take the value from the user for finding pctal number. 
  Aurthor Abdur rehman
  */
#include<stdio.h>

int main()
{
    int number, octal_number = 0;
    //  prompt the value from the user
    printf("Enter a number between 0 to n number of times :\n");
    scanf("%d",&number);
     int power = 1;
    while (number >0){
        // int power = 1;
      octal_number +=  (number % 8) * power;
      number /=8;
      power *=10;
    }
    printf("The octal number is %d:",octal_number);

    return 0;
}