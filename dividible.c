#include<stdio.h>
void main()
{
    int a,b=7;
    printf("Enter the value of a: \n");
    scanf("%d",&a);
    if((a%b)==0)
        printf("The number a=%d is divisible by 7");
    else
         printf("The number a=%d is not divisible by 7");
}
