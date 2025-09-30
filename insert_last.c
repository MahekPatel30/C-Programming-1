#include<stdio.h>
int main()
{
    int a[50],n,i,c;
    printf("Enter no. of elements:");
    scanf("%d",&n);
    printf("Enter %d elements:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

     printf("Enter the number to be inserted at the last:");
    scanf("%d",&c);
    n++;

      a[n-1]=c;

    printf("Array after inserting:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;

}

