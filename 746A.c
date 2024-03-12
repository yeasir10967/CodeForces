#include<stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int Count = 0;
    while (a >= 1 && b >= 2 && c >= 4) {
        a -= 1;
        b -= 2;
        c -= 4;
        Count += 7;
    }
    printf("%d\n", Count);
    return 0;
}