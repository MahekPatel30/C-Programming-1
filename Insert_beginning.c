#include<stdio.h>
int main()
{
    int a[50],n,b,i;
    printf("Enter no. of elements:");
    scanf("%d",&n);
    printf("Enter %d elements",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the number to be inserted at the beginning:");
    scanf("%d",&b);
    for(i=n;i>0;i--)
    {
        a[i]=a[i-1];
    }
    a[0]=b;
    n++;
    printf("Array after inserting");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;

}
