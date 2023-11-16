#include<stdio.h>

int main(){
int num_1,num_2;
    do

    {
    printf("Enter a Two numbers:\n");
    scanf("%d%d",&num_1,&num_2);
    } while (num_1 != num_2);
    
    
    // printf("Enter a Two numbers:\n");
    // scanf("%d%d",&num_1,&num_2);

    if(num_1==num_2){
        printf("%d ==  %d",num_1,num_2);
    }
    else{
        printf("Invalid:");
    }
}