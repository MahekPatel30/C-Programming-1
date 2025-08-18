#include<stdio.h>
int main(){
float grossSales;
float SalesDiscount;
float netSales;
printf("Enetr Gross Sales:");
scanf("%f",&grossSales);
printf("Enetr Sales Discount:");
scanf("%f", &SalesDiscount);
netSales = grossSales*0.90;
printf("\nNet Sales: %.2f\n",netSales);
return 0;
}
