#include<stdio.h>
int main()
{
double a;//grossSales;
double b;//discountRate;
double c;//netSales;

printf("Enter Gross Sales:");
scanf("%d",&a);
if(a>20000){
b=0.15;
}
else if(a>10000){
b=0.10;}
else
{
b=0.05;
}
c=a*(1-b);
printf("Net sales:%d\n",c);
return 0;
}
