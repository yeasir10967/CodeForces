#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
   char str[101],ch;
   gets(str);
    int j=0,l,countUp=0,countLow=0;
    l=strlen(str);
    for(int i=0;i<l;i++)
    {
        // if(str[i]>'A' && str[i]<'Z')
        if (isupper(str[i]))
        {
            countUp++;
        }
        else
        {
            countLow++;
        }

    }
    if(countUp>countLow)
    {
    while(str[j])
    {
        ch=str[j];
        putchar(toupper(ch));
        // printf("%c",toupper(ch));
        j++;
    }
    }
    else
    {
         while(str[j])
    {
        ch=str[j];
        putchar(tolower(ch));
        // printf("%c",tolower(ch));
        j++;
    }
    }
 
    return 0;
}