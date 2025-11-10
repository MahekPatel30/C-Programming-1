#include <stdio.h>

void swap(int x, int y);

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before swapping (in main): a = %d, b = %d\n", a, b);

    swap(a, b);

    printf("After swapping (in main): a = %d, b = %d\n", a, b);

    return 0;
}


void swap(int x, int y) {
    int temp;
    temp = x;
    x = y;
    y = temp;

    printf("After swapping (inside function): x = %d, y = %d\n", x, y);
}
