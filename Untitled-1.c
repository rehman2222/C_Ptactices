/*project 4
  A program for a telephone number from the console
  Aurthor Abdur rehman*/
#include <stdio.h>

int main()
{
    double first, second, third;
    printf("Enter Three numbers in the form of [(xxx) xxx-xxxx] :");
    scanf("(%lf) %lf-%lf", &first, &second, &third);

    printf("You entered %lf %lf %lf :\n", first, second, third);

    return 0;
}
