#include <stdio.h>
#include <string.h>  // for strlen()

int main() {
    char str[100];
    int isPalindrome = 1;  // Assume it's a palindrome

    printf("Enter a string: ");
    scanf("%s", str);  // Use fgets() if you want to include spaces

    int len = strlen(str);

    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            isPalindrome = 0;  // Not a palindrome
            break;
        }
    }

    if (isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}

