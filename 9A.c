#include<stdio.h>
#include <stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include <stdbool.h>
int main()
{
    int a,b,max;
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        max=a;
    } else if (b>a)
    {
        max=b;
    } else if (a==b)
    {
      max=a;
    }
    if(max==1)
    {
        printf("1/1\n");
    } else if(max==2)
    {
        printf("5/6\n");
    } else if(max==3)
    {
        printf("2/3\n");
    } else if(max==4)
    {
        printf("1/2\n");
    } else if(max==5)
    {
        printf("1/3\n");
    } else if(max==6)
    {
        printf("1/6\n");
    } 
    
    
    return 0;
}