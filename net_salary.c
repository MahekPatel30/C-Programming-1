#include<stdio.h>
void main()
{
    int n,g,a,d;
    printf("Enter gross salary:\n");
    scanf("%d",&g);
    if(g>10000)
    {
        a=g/10;
        d=(3/100)*g;
        n=(g+a)-d;
        printf("the net salary is %d",n);
    }
    else
    {

    1
            a=(7/100);
        d=(2/100)*g;
        n=(g+a)-d;
        printf("the net salary is %d",n);
    }
}
