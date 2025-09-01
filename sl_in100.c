#include <stdio.h>
#include <limits.h>

int main()
{
    int numbers[100];
    int largest = INT_MIN;
    int smallest = INT_MAX;
    printf("Enter 100 numbers:\n");
    for (int i = 0; i < 100; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);

        if (numbers[i] > largest)
        {
            largest = numbers[i];
        }
        if (numbers[i] < smallest)
        {
            smallest = numbers[i];
        }
    }

    printf("\nLargest number: %d\n", largest);
    printf("Smallest number: %d\n", smallest);

    return 0;
}
