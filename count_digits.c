#include<stdio.h>

int main()
 {
     int n,c=0;
     printf("Enter number:");
     scanf("%d",&n);
     if(n==0)
     {
       c=1;
     }
     else
     {
         while(n>0)
         {
         n=n/10;
        c++;
         }
     }
     printf("'Total digits in the number are %d\n:",c);
     return 0;
 }
