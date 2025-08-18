#include <stdio.h>

int main() {

    float a,b,c,d;
    printf("Enter the length of the rectangle: ");
    scanf("%f", &a);
    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &b);
    c = a * b;
    d = 2 * (a + b);
    printf("Area of the rectangle: %.2f\n",c);
    printf("Perimeter of the rectangle: %.2f\n",d);
    return 0;
}
