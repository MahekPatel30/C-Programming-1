#include <stdio.h>

int main()
{
    int n, i;
    float num, sum = 0.0, average;
    printf("Enter the number of values (n): ");
    scanf("%d", &n);
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; ++i)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%f", &num);
        sum += num;
    }

   if (n > 0)
    {
        average = sum / n;
    } else
    {
        average = 0.0;
    }


    printf("\nSum of the numbers = %.2f\n", sum);
    printf("Average of the numbers = %.2f\n", average);

    return 0;
}
