#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the value of a,b and c:\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
        printf("a=%d is greater than b=%d and c=%d");
    else
    if(b>a && b>c)
        printf("b=%d is greater than a=%d and c=%d");
    else if(c>a && c>b)
        printf("c=%d is greater than a=%d and b=%d");

}

