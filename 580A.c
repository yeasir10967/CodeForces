#include<stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
     int n, count = 1, maxCount = 1;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] <= arr[i + 1]) {
            count++;
            if (count > maxCount) {
                maxCount = count; 
            }
        } else {
            count = 1; // Reset the count when the order is broken
        }
    }

    printf("%d\n", maxCount);
    return 0;
}
