#include<stdio.h>
#include <stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include <stdbool.h>

int main() {
    int n;
    scanf("%d", &n);
    
    long long arr[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%lld", &arr[i]);
    }

    long long count = 1, maxCount = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[i - 1]) {
            count++;
        } else {
            if (count > maxCount) {
                maxCount = count;
            }
            count = 1;
        }
    }

    if (count > maxCount) {
        maxCount = count;
    }

    printf("%lld\n", maxCount);

    return 0;
}
