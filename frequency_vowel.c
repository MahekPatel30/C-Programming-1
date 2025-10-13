#include <stdio.h>
#include <string.h>
#include <ctype.h>  // for tolower()

int main() {
    char str[200];
    int a = 0, e = 0, i = 0, o = 0, u = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Reads spaces too

    // Loop through each character
    for (int j = 0; str[j] != '\0'; j++) {
        char ch = tolower(str[j]);  // Make it case-insensitive

        switch (ch) {
            case 'a': a++; break;
            case 'e': e++; break;
            case 'i': i++; break;
            case 'o': o++; break;
            case 'u': u++; break;
        }
    }

    // Print the vowel frequencies
    printf("\nVowel frequencies:\n");
    printf("a: %d\n", a);
    printf("e: %d\n", e);
    printf("i: %d\n", i);
    printf("o: %d\n", o);
    printf("u: %d\n", u);

    return 0;
}

