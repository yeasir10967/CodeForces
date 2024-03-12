#include <stdio.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <stdbool.h>
#include <ctype.h>
int main()
{
    int n;
    scanf("%d", &n);
    char str[n];
    scanf("%s", str);
    int res = 0, count = 0;
    char ans[2];
    for (int i = 0; i < n - 1; i++)
    {
        count = 0;
        for (int j = 0; j < n - 1; j++)
        {
            if (str[i] == str[j] && str[i + 1] == str[j + 1])
            {
                count++;
                if (res < count)
                {
                    res = count;
                    ans[0] = str[i];
                    ans[1] = str[i + 1];
                    ans[2] = '\0';
                }
            }
        }
    }
    printf("%s", ans);

    return 0;
}

