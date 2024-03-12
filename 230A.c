#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main() {
    int s, n, a[1000], b[1000], i, count = 0;
    scanf("%d %d", &s, &n);
    
    for (i = 0; i < n; i++)
        scanf("%d %d", &a[i], &b[i]);
    
    for (i = 0; i < n; i++) {
        if (s > a[i] && a[i] != 0) {
            s += b[i];
            a[i] = 0;
            i = -1;
            count += 1;
        }
    }
    
    if (count == n) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}


