#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, count = 0;
    scanf("%d", &n);
    int arr[] = {100, 20, 10, 5, 1};

    for (int i = 0; i < 5; i++) {
        count += n / arr[i];
        n %= arr[i];
    }

    printf("%d\n", count);
    return 0;
}
