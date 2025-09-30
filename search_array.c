#include<stdio.h>
int main()
{
    int a[50],n,b,i,t;
    printf("Enter no. of elements:");
    scanf("%d",&n);
    printf("Enter %d elements:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the value to be search:");
    scanf("%d",&b);
    for(i=0;i<n;i++)
    {
        if(a[i]=b)
        {
          t=1;
        }
    }

      if(t=1)
      {
            printf(" value  found ");
      }
      else
      {
          printf("The value is not found ");
      }

    return 0;
}
