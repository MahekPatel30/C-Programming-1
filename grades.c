#include<stdio.h>
int main()
{
    int a; //Subject 1
    int b; //Subject 2
    int c; //Subject 3
    int d; //Total marks
    int e; //Average marks

    printf("Enter the marks for Subject 1:");
    scanf("%d",&a);
    printf("Enter the marks for Subject 2:");
    scanf("%d",&b);
    printf("Enter the marks for Subject 3:");
    scanf("%d",&c);
    if (a<35 || b<35 || c<35)
    {
        printf("Result: Fail\n");
    }
    else
    {
        d=a+b+c;
        e=d/3;
        printf("Total Marks:%d\n",d);
        printf("Average Marks:%f\n",e);
        if(e>=70)
        {
            printf("Result:Distinction\n");
        }
        else if(e>=60){
            printf("Result:First Class\n");
        }
        else if(e>=50){
            printf("Result:Second Class\n");
        }
            else if(e>=35){
            printf("Result:Third Class\n");
                 }
        else {
            printf("Result:Fail");

    }
    return 0;
}
