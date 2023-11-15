#include<stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int t,count=0;
    scanf("%d",&t);
    while(t--)
    {
        int a,b;
         scanf("%d %d",&a,&b);
         if(a%b==0)
         {
             printf("0\n");
            
         } else
         {
            printf("%d\n",b-(a%b));
         }
    }
   
    return 0;
}
