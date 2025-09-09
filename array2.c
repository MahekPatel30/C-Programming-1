#include<stdio.h>
int main()
{
    int a[10];
    printf("Enter any 10 numbers:\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The 4th value is %d\n",a[3]);
    printf("The 7th value is %d\n",a[6]);
    printf("The 9th value is %d\n",a[8]);


    return 0;

}
