#include <stdio.h>

int main() {

    float a,b,c;
    printf("Enter the length of the square: ");
    scanf("%f", &a);
    b = a*a;
    c = 4*a;
    printf("Area of the sqaure: %.2f\n",b);
    printf("Perimeter of the square: %.2f\n",c);
    return 0;
}
