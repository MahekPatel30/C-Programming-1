
#include<stdio.h>
int main()
{
    int a,b,m,add,sub;
    int d;
    printf("Enter the value of a and b:\n");
    scanf("%d%d",&a,&b);
    d=a/b;
    printf("Division of a and b is:%2d\n",d);
    m=a*b;
    printf("Multipication of a and b is:%2d\n",m);
    add=a+b;
    printf("Addition of a and b is %d\n",add);
     sub=a-b;
    printf("Subtraction of a and b is %d\n",sub);
    return 0;

}
