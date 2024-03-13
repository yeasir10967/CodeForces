#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n > 0) {
        printf("%d", n);
    } else {
        int ld = n / 10 % 10;
        int bld = n % 10;
        
        if ( ld < bld) {
            
            printf("%d", n / 100 * 10 + bld);
        } else {

            printf("%d", n / 10);
        }
    }

    return 0;
}
