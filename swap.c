
#include<stdio.h>
int main()
{
int a=5;
int b=10;
int c;
printf("Before swapping: a=%d, b=%d\n",a,b);
c=a;
a=b;
b=c;
printf("After swapping: a=%d, b=%d\n",a,b);
return 0;
}
