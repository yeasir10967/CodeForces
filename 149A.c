#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
int main()
{
    int k, i, j, temp, flag, count = 0, sum = 0;
    scanf("%d", &k);
    int month[12];
    for (i = 0; i < 12; i++)
    {
        scanf("%d", &month[i]);
    }
    if (k == 0)
    {
        printf("0\n");
    }
    else
    {
        for (i = 0; i < 12; i++)
        {

            for (j = 0; j < 12 - 1 - i; j++)
            {
                if (month[j] < month[j + 1])
                {
                    temp = month[j];
                    month[j] = month[j + 1];
                    month[j + 1] = temp;
                }
            }
        }
        for (i = 0; i < 12; i++)
        {
            sum = sum + month[i];
            count += 1;
            if (sum >= k)
            {
                printf("%d\n", count);
                break;
            }
        }
        if (sum < k)
        {
            printf("-1\n");
        }
    }
    return 0;
}