#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main() {
    int  m, n;
    scanf("%d %d",&n,&m);
        char arr[n][m];
    for (int i = 0; i < n; ++i) {
            scanf("%s", arr[i]);
    }
    int count=0;
    for (int k = 0; k < n-1; ++k) {
        for (int i = 0; i < m-1; ++i) {
            if(arr[k][i]*arr[k+1][i]*arr[k+1][i+1]*arr[k][i+1]=='f'*'a'*'c'*'e') count++;
        }
    }
    printf("%d",count);
    return 0;
}



