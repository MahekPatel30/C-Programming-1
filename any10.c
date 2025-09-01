#include <stdio.h>

int main() {
    int numbers[10];
    int sum = 0;
    float average;
    printf("Enter 10 integer values:\n");


    for (int i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }


    average = (float)sum / 10.0;


    printf("\nSum of the 10 numbers: %d\n", sum);
    printf("Average of the 10 numbers: %.2f\n", average);
    return 0;
}

