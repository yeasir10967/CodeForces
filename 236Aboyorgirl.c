#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
int main()
{
    int i, j, count = 0;
    char str[101], tmp;
    scanf("%s", str);
    int l = strlen(str);
    for (i = 0; i < l; i++)
    {
        for (j = i+1; j < l; j++)
        {

            if (str[i] > str[j])
            {
                tmp = str[i];
                str[i] = str[j];
                str[j] = tmp;
            }
        }
    }
    for (i = 0; i < l; i++)
    {
        if (str[i] != str[i + 1])
        {
            count++;
        }
    }

    if (count % 2 == 0)
        printf("CHAT WITH HER!");
    else
        printf("IGNORE HIM!");
    return 0;
}