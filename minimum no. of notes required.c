#include<stdio.h>
int main()
{
    int a[]={500,200,100,50,20,10,5,2,1};
    int b=sizeof(a)/sizeof(a[0]);
    int amount;
    printf("Enter the amount:");
    scanf("%d",&amount);
    printf("Minimum number of notes required:");
    for(int i=0;i<b;i++)
    {
        if(amount>=a[i])
        {
            int c;
            c=amount/a[i];
            printf("%d note of rupees %d\n",c,a[i]);
            amount=amount%a[i];
        }

    }
    return 0;
}
