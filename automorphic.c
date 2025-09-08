#include<stdio.h>

int isAutomorphicNumber(int num) {
    int square = num * num;

    while (num > 0) {
        if (num % 10 != square % 10) {
            return 0;
        }
        num /= 10;
        square /= 10;
    }
    return 1;
}

int main() {
    int number;
    printf("Enter Number:");
    scanf("%d",&number);

    if (isAutomorphicNumber(number)) {
        printf("%d is an Automorphic Number", number);
    } else {
        printf("%d is not an Automorphic Number", number);
    }

    return 0;
}
