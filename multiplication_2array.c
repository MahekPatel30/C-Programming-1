#include<stdio.h>
int main()
{
    int d,e;
     printf("Enter the no of rows:");scanf("%d",&d);
    printf("Enter the no of columns:");scanf("%d",&e);
    int a[d][e];
    int b[d][e];
    int c[d][e];

    for(int i=0;i<d;i++)
    {
        for(int j=0;j<e;j++)
        {
            printf("Enter the element a%d%d:",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
        for(int i=0;i<d;i++)
    {
        for(int j=0;j<e;j++)
        {
            printf("Enter the element b%d%d:",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<d;i++)
    {
        for(int j=0;j<e;j++)
        {
          c[i][j]=a[i][j]*b[i][j];

        }
    }printf("The multiplication is:\n");
        for(int i=0;i<d;i++)
        {
        for(int j=0;j<e;j++)
        {
            printf("%d\t",c[i][j]);

            if(j==e-1)
            {
                printf("\n");
            }



        }
        }

        return 0;

}
