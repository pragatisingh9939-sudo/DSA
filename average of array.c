#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, avg;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    avg = sum / n;

    printf("Average = %.2f", avg);

    return 0;
}
