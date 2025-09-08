#include <stdio.h>

int main() {
    int n;
    int first_term = 1, second_term = 1;
    int next_term;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series up to %d terms:\n", n);

    if (n >= 1) {
        printf("%d", first_term);
    }
    if (n >= 2) {
        printf(", %d", second_term);
    }


    for (int i = 3; i <= n; i++) {
        next_term = first_term + second_term;
        printf(", %d", next_term);
        first_term = second_term;
        second_term = next_term;
    }
    printf("\n");

    return 0;
}
