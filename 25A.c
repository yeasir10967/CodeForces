#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, even = 0, odd = 0;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    if (even > odd)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 != 0)
            {
                printf("%d\n", i + 1);
                break;
            }
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0)
            {
                printf("%d\n", i + 1);
                break;
            }
        }
    }

    return 0;
}
