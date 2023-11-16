/*project 1
  This program give the current date
  Aurthor Abdur rehman*/
#include<stdio.h>

int main()
{
    // VAriable decleration
    int month,day,year;
    //   prompt the value from the user
    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d%d%d",&month,&day,&year);

printf("your Enter the date is %d/%d/%d: ",year,month,day);

return 0;
    
}