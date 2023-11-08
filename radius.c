/*This program calculate volume of a sphere
Aurthor Abdur Rehman
*/
#include<stdio.h>
#include<math.h>

int main()
{
    float r = 10.0f;
    float v = 4.0f / 3.0f * M_PI *pow(r,3);

    printf("The volume of a sphere with a 10 meter radius is %2.f cubic meter .\n",v);

    return 0; 
}