#include<stdio.h>
int main()
{

  float r,i,n,p;
  printf("Enter the principal amount:\n");scanf("%f",&p);
  printf("Enter rate:");scanf("%f",&r);
  printf("Enter the no. of years:");scanf("%f",&n);
  i=(p*r*n)/100,
  printf("The interest is:%3f",i);
  return 0;

}
