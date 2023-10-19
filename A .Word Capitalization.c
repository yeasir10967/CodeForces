#include<stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[1000],ch;
    gets(str);
    if(isupper(str[0]))
    {
        printf("%s",str);
        return 0;
    }
    else
    {
        char ch=str[0];
        for(int i=0;i<1;i++)
        {
             printf("%c",toupper(ch));
           
        }
         for(int i=1;i<strlen(str);i++)
            {
                char chh=str[i];
                  printf("%c",chh);
            }  
    }
    return 0;
}
