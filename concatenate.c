#include <stdio.h>
#include <string.h>  // for strcat()

int main() {
    char str1[200];
    char str2[200];
     printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    strcat(str1, str2);  // Append str2 to str1

    printf("Concatenated string: %s\n", str1);

    return 0;
}

