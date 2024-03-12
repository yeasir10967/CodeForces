#include<stdio.h>
#include <stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include <stdbool.h>
int main()
{
    int n;
    scanf("%d",&n);
    int flag=0;
    for(int i=1;i<=n;i++)
    {
        if(i*(i+1)/2==n)
        {
            flag=1;
            break;
        }  
    }
    if(flag)
    {
        printf("YES\n");
    } else
    {
         printf("NO\n");
    }
    
    return 0;
}