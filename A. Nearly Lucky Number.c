#include<stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
   char str[100];
   int count=0;
   gets(str);
   for(int i=0;i<strlen(str);++i)
   {
      if(str[i]=='4' || str[i]=='7')
      {
         count++;
      }
   }
   if(count==4 || count==7)
   {
      printf("YES");
   }
   else{
      printf("NO");
   }
   return 0;
}
