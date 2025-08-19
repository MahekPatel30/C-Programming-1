#include<stdio.h>
int main()
{
    int m;
    /*m=the number of month*/
    printf("Enter the no.of month(1-12)\n");
    scanf("%d",&m);
    switch(m)
    {
    case 1:
        printf("The no. of days in this month are:31");
        break;
         case 2:
        printf("The no. of days in this month are:29/28");
        break;
         case 3:
        printf("The no. of days in this month are:31");
        break;
         case 4:
        printf("The no. of days in this month are:30");
        break;
         case 5:
        printf("The no. of days in this month are:31");
        break;
         case 6:
        printf("The no. of days in this month are:30");
        break;
         case 7:
        printf("The no. of days in this month are:31");
        break;
         case 8:
        printf("The no. of days in this month are:31");
        break;
         case 9:
        printf("The no. of days in this month are:30");
        break;
         case 10:
        printf("The no. of days in this month are:31");
        break;
         case 11:
        printf("The no. of days in this month are:30");
        break;
         case 12:
        printf("The no. of days in this month are:31");
        break;
         default:
            printf("Out of range");
            break;
    }
    return 0;
}
