#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);  // Use fgets() if you want to include spaces

    int len = strlen(str);

    printf("Reverse string vertically:\n");
    for (int i = len - 1; i >= 0; i--) {
        printf("%c\n", str[i]);
    }

    return 0;
}

