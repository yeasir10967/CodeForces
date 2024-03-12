#include<stdio.h>
#include <stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include <stdbool.h>
int main()
{
    int n,faces=0;
    scanf("%d",&n);
    getchar();
    char str[100];
    while(n--)
    {
        gets(str);
        if(str[0]=='T')
        {
            faces+=4;
        } else if (str[0]=='C')
        {
            faces+=6;
        } else if (str[0]=='O')
        {
            faces+=8;
        }
        else if (str[0]=='D')
        {
            faces+=12;
        }
        else if (str[0]=='I')
        {
            faces+=20;
        }
        
        
    }
    printf("%d\n",faces);
    return 0;
}