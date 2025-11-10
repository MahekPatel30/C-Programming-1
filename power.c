#include <stdio.h>


int power(int a, int b);

int main() {
    int base, exponent;

    printf("Enter base number: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    printf("%d raised to the power %d is: %d\n", base, exponent, power(base, exponent));

    return 0;
}


int power(int a, int b) {
    if (b == 0)
        return 1;
    else
        return a * power(a, b - 1);
}
