#include<stdio.h>

int main() {
    int n, k, count = 0;
    scanf("%d %d", &n, &k);
    int arr[n];
    int indices[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        indices[i] = i + 1; // Initialize indices array with original indices
    }

    // Sorting in non-increasing order
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - 1 - i; j++) {
            if(arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                // Swap corresponding indices
                temp = indices[j];
                indices[j] = indices[j + 1];
                indices[j + 1] = temp;
            }
        }
    }

    // Check if it is possible to form a suitable team
    if (k > n || arr[k - 1] == arr[k]) {
        printf("NO\n");
    } else {
        printf("YES\n");
        for (int i = 0; i < k; i++) {
            printf("%d ", indices[i]);
        }
    }

    return 0;
}
