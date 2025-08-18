#include<stdio.h>
int main()
{
    float f,c;
    printf("Enter the temperature in fahrenhiet:\n");
    scanf("%f",&f);
    c=5/9*(f-32);
    printf("The tempurature in celcius:%f",c);
    return 0;
}


