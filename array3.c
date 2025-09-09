#include<stdio.h>
int main()
{
    int a[5];
    int n;
    printf("Enter any 5 numbers:\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for( int i=0;i<5;++i)
    {
        for(int j=i+1;j<5;++j)
        {
            if(a[i]>a[j])
            {
                n=a[i];
                a[i]=a[j];
                a[j]=n;

            }
        }
    }
    printf("The numbers in ascending order is:\n");
     for(int i=0;i<5;i++)
    {
        printf("%d\n",a[i]);
    }

}
