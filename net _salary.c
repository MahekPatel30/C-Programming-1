#include<stdio.h>
int main()
{
double gross_salary;
double allowance;
double deduction;
double net_salary;
printf("Enter the gross salary:");
scanf("%f",&gross_salary);
allowance = 0.10 * gross_salary;
deduction = 0.03 * gross_salary;
net_salary = gross_salary + allowance - deduction;
printf("Gross Salary: %.lf\n",gross_salary);
printf("Allowance: %.2lf\n",allowance);
printf("Deduction: %.2lf\n",deduction);
printf("Net Salary: %.2lf\n",net_salary);
return 0;
}
