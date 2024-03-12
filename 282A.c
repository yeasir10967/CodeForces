#include<stdio.h>
#include <stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include <stdbool.h>
int main()
{
    int n,X=0;
    char str[4];
    scanf("%d",&n);
   while(n--)
   {
    scanf("%s",&str);
    if(strcmp(str,"X++")==0 || strcmp(str,"++X")==0)
    {
        X++;
    } else 
    {
        X--;
    }
   }
   printf("%d\n",X);

    return 0;
}