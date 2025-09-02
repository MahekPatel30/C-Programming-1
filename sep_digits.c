#include <stdio.h>

int main()
 {
     int n,m;
     printf("Enter a number:");
     scanf("%d",&n);
     printf("Digits:\n");
     while(n>0)
     {
         m=n%10;
         printf("%d\n",m);
         n=n/10;
     }
     return 0;
 }
