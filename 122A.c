#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdbool.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int flag = 0;
    int arr[] = {4, 7, 47, 74, 44, 77, 444, 447, 474, 477, 777, 774, 744};

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        if (n % arr[i] == 0) {
            flag = 1;
        }
    }

    if (flag) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}



