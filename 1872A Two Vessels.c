#include <stdio.h>
#include <stdlib.h>

int main() {

    int t;
    scanf("%d", &t);

    while (t--) {
        int a, b, c,m;
        scanf("%d %d %d", &a, &b, &c);

     m = (abs(a - b) + 2 * c - 1) / (2 * c);
        printf("%d\n", m);
    }
    return 0;
}
