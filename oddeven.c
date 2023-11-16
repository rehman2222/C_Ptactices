#include<stdio.h>

int main(){
    int num;
    do
    {
    printf("Enter an integer:\n");
    scanf("%d",&num);
    } while (num<=0);
    
    // printf("Enter an integer:\n");
    // scanf("%d",&num);

    if (num %2 == 0)
    {
        printf("%d is an Even Number: ",num);
    }
    else
    {
        printf("%d is an ODD Number: ",num);
    }
}