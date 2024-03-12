#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[4], arr2[3];
    
    for (int i = 0; i < 4; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < 3; i++) {
        scanf("%d", &arr2[i]);
    }

    int found = 0; // A flag to check if the conditions are met

    for (int i = 0; i < 4; i++) {
        if (arr[i] == 1 || arr2[i] == 1) {
            if (arr[i] == 2 || arr2[i] == 2) {
                if (arr[i] == 3 || arr2[i] == 3) {
                    if (arr[i] == 4 || arr2[i] == 4) {
                        found = 1; // All conditions are met
                        break;
                    }
                }
            }
        }
    }

    if (found) {
        printf("I am the guy\n");
    } else {
        printf("Oh, my keyboard!\n");
    }

    return 0;
}
