#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    getchar();

    char strings[1000][20]; 
    int uniqueCount = 0; 
    for (int i = 0; i < n; i++) {
        char str[20];
        fgets(str, sizeof(str), stdin);

        int isUnique = 1; 

    
        for (int j = 0; j < uniqueCount; j++) {
            if (strcmp(str, strings[j]) == 0) {
                isUnique = 0; 
                break;
            }
        }

        if (isUnique) {
          
            strcpy(strings[uniqueCount], str);
            uniqueCount++;
        }
    }
    printf("%d\n", uniqueCount);

    return 0;
}
