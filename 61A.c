#include<stdio.h>
#include<string.h>

int main()
{
    char a[101],b[101];
    gets(a);
    gets(b);

    for(int i = 0; i < strlen(a); i++)
    {
        if(a[i] == b[i]) printf("0");
        else printf("1");
    }

}