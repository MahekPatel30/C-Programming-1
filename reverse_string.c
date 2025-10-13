#include <stdio.h>
#include <string.h>  // for strlen()

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);  // Note: doesn't read spaces. Use fgets() if needed.

    int len = strlen(str);
    int start = 0;
    int end = len - 1;

    // Swap characters from both ends
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}
