#include<stdio.h>
#include <stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include <stdbool.h>
int main()
{
  char str1[10],str2[10],str3[10];
  scanf("%s",str1);
   scanf("%s",str2);
    scanf("%s",str3);
    int F,M,S;
    F=strlen(str1);
    M=strlen(str2);
    S=strlen(str3);
    if(F==8&&M==5&&S==5||F==5&&M==4&&S==4||F==4&&M==8&&S==8)
        printf("F");
    else if(M==8&&F==5&&S==5||M==5&&F==4&&S==4||M==4&&F==8&&S==8)
        printf("M");
    else if(S==8&&M==5&&F==5||S==5&&M==4&&F==4||S==4&&M==8&&F==8)
        printf("S");
    else
        printf("?");
    return 0;
}