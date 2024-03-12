#include<stdio.h>

int main()
{
    int count = 0,n;
    scanf("%d\n",&n);
    char str[n];
    gets(str);

    for(int i = 0; i < n; i++)
    {
        if(str[i] == str[i+1])
        {
            count++;
        }
    }
    printf("%d",count);
}