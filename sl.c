#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter the value of a and b:\n");
    scanf("%d%d",&a,&b);
    if(a>b)
        printf("a=%d is greater than b=%d");
    else
        printf("b=%d is greater than a=%d");


}
