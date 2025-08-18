#include<stdio.h>
int main()
{
    float b,kb,gb,mb;
    printf("Enter the value in byte:\n");
    scanf("%f",&b);
    kb=b/1000;
    printf("In kilobyte: %f",kb);
     mb=b/1000000;
    printf("In megabyte: %f",mb);
     gb=b/1000000000;
    printf("In gigabyte: %f",gb);
    return 0;
}

