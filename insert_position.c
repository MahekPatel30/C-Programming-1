#include<stdio.h>
int main()
{
    int a[50],n,b,i,c;
    printf("Enter no. of elements:");
    scanf("%d",&n);
    printf("Enter %d elements:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     printf("Enter no. of position:");
    scanf("%d",&b);
     printf("Enter the number to be inserted:");
    scanf("%d",&c);
     for(i=n;i>b-1;i--)
    {
        a[i]=a[i-1];
    }
      a[b-1]=c;
    n++;
    printf("Array after inserting:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;

}
