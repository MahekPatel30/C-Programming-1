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


    n--;

    printf("Array after deleting:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;

}


