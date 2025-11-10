#include <stdio.h>


void findMaxMin(int arr[], int n, int *max, int *min);

int main() {
    int n, i;
    int max, min;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    findMaxMin(arr, n, &max, &min);

    printf("Maximum value = %d\n", max);
    printf("Minimum value = %d\n", min);

    return 0;
}


void findMaxMin(int arr[], int n, int *max, int *min) {
    int i;
    *max = *min = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > *max)
            *max = arr[i];
        if (arr[i] < *min)
            *min = arr[i];
    }
}
