#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include <stdbool.h>


void bubblesort(int arr[], int n);

int main() {
    int n, m, count = 0;
    scanf("%d %d", &n, &m);

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    bubblesort(arr, n);

    for(int i = 0; i < m ; i++) {
        if(arr[i]<0)
        {
            count=count+abs(arr[i]);
        }
      
    }

    printf("%d\n", count);

    return 0;
}
void bubblesort(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        int swap = 0;
        for(int j = 0; j < n-1-i; j++) {  
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swap = 1;
            }
        }
        if(swap == 0) {
            break;
        }
    }
}
