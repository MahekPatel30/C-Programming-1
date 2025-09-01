#include <stdio.h>

int main()
 {
    int num;
    int countPositive = 0;
    int countNegative = 0;
    int countZero = 0;
    int i;

    printf("Enter 200 numbers:\n");

    for (i = 0; i < 200; i++)
    {
        scanf("%d", &num);

        if (num > 0) {
            countPositive++;
        } else if (num < 0) {
            countNegative++;
        } else {
            countZero++;
        }
    }

    printf("\nResults:\n");
    printf("Positive numbers: %d\n", countPositive);
    printf("Negative numbers: %d\n", countNegative);
    printf("Zeroes: %d\n", countZero);

    return 0;
}
