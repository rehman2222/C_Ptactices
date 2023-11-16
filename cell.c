//Author Yawar Hussain
#include<stdio.h>

int main()
{
    double first,second,thrid;
    printf("Enter the first,second,thrid in form of [(xxx) xxx-xxxx] : ");
    scanf("(%lf) %lf-%lf",&first,&second,&thrid);

    printf("Your enter : %0.0lf.%0.0lf.%0.0lf\n",first,second,thrid);
    return 0;
}
