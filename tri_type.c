#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the sides of the triangle a,b and c:\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>=c || b+c>=a || a+c>=b)
    {
        printf("The triangle with the above sides is valid\n");
    }
    else
    {
        printf("The triangle is invalid\n");
    }
    if(a==b==c)
        printf("The triangle is equilateral");
    else if(a==b || b==c || a==c)
        printf("The triangle is isosceles");
    else
        printf("The triangle is scalene");
     return 0;
}
