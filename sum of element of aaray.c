#include <stdio.h>

int main() {
    int n, i, sum = 0;

    // Take size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];  // array declaration

    // Input elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate sum
    for(i = 0; i < n; i++) {
        sum = sum + arr[i];
    }

    // Output result
    printf("Sum of elements = %d", sum);

    return 0;
}
