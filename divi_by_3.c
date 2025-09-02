#include <stdio.h>

int main()
 {
    int sum = 0;
    int i;
     for (i = 1; i <= 100; i++)
    {

        if (i % 3 == 0)
        {
            sum += i;
        }
    }


    printf("The sum of numbers divisible by 3 in the range of 1 to 100 is: %d\n", sum);

    return 0;
}
