#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
int main()
{
    int a, b,count=0;
    scanf("%d %d", &a, &b);
    while (a <= b)
    {
        a *= 3;
        b *= 2;
        count++;
    }
    printf("%d", count);
    return 0;
}