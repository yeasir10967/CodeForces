#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int main()
{
    int n, i, j, count, max = 0;
    scanf("%d", &n);
    char str[n][8];
    for (i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }
    for (i = 0; i < 7; i++)
    {
        count = 0;
        for (j = 0; j < n; j++)
        {
            if (str[j][i] == '1')
            {
                count++;
                if (count > max)
                {
                    max = count;
                }
            }
        }
    }

    printf("%d\n", max);
    return 0;
}
