#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the sides of the triangle a,b and c:\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>=c || b+c>=a || a+c>=b)
    {
        printf("The triangle with the above sides is valid");
    }
    else
    {
        printf("The triangle is invalid");
    }
     return 0;
}
