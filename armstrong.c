#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, n = 0;
    double result = 0.0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;


    int tempNum = num;
    while (tempNum != 0) {
        tempNum /= 10;
        ++n;
    }


    tempNum = num;
    while (tempNum != 0) {
        remainder = tempNum % 10;
        result += pow(remainder, n);
        tempNum /= 10;
    }


    if ((int)result == originalNum) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
