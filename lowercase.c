#include <stdio.h>
#include <string.h>
#include <ctype.h>  // Needed for tolower()

int main() {
    char str[100];
    printf("Enter your string:\n");
    scanf("%s",&str);
    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        str[i] = tolower(str[i]);
    }

    printf("Lowercase string: %s\n", str);
    return 0;
}
