#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str[201];
    gets(str);
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == '.')
            printf("0");
        else
        {
            if (str[i + 1] == '.')
            {
                printf("1");
                i++;
            }
            else
            {
                printf("2");
                i++;
            }
        }
    }
    return 0;
}