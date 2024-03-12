#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int d = a + b * c;
    int e = a * (b + c);
    int f = a * b * c;
    int g = (a + b) * c;
    int h = a + b + c;

    int max = d;  

    if (e > max) {
        max = e;
    }
    if (f > max) {
        max = f;
    }
    if (g > max) {
        max = g;
    }
    if (h > max) {
        max = h;
    }

    printf("%d\n", max);

    return 0;
}
