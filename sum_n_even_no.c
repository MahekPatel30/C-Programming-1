#include<stdio.h>
void main()
{
    int n,s=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        s=s+(2*i);
    }
    printf("%d\n",s);
}


