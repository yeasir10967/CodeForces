#include<stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
        int t;
    scanf("%d", &t);
    while (t--) {
        int a, b,x;
        scanf("%d %d", &a, &b);

       x  = abs(a - b);

        if (x % 10 == 0) {
            printf("%d\n", x / 10);
        } else {
            printf("%d\n", (x / 10) + 1);
        }
    }
    return 0;
}