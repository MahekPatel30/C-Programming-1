#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);  // Only reads until space. Use fgets() for full lines.

    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c\n", str[i]);
    }

    return 0;
}

