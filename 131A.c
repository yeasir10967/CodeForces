#include<stdio.h>
#include <stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include <stdbool.h>
int main()
{
 char str[101];
 scanf("%s",&str);
 for(int i=1;str[i]!='\0';i++)
 {
 if(str[i]>='a' && str[i]<='z')
 {
  printf("%s",str);
   return 0;
 }
 }

 for(int i=0;str[i]!='\0';i++)
 {
  printf("%c",str[i]^32);
 }

}


