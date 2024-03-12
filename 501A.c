#include <stdio.h>
#include <stdlib.h>
int max(int x, int y) {
    return (x > y) ? x : y;
}
int main() {
    int a, b, c, d, vasya, misha;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    misha = max((3 * a) / 10, a - ((a * c) / 250));
    vasya = max((3 * b) / 10, b - ((b * d) / 250));
    if (misha > vasya) {
        printf("Misha\n");
    } else if (vasya > misha) {
        printf("Vasya\n");
    } else {
        printf("Tie\n");
    }
    return 0;
}
