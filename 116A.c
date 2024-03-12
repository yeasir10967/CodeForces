#include<stdio.h>
#include <stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include <stdbool.h>
int main()
{
    int t,a,b,sum=0,max=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&a,&b);
        sum=sum+(b-a);
        if(sum>=max)
        {
            max=sum;
        }
    }
    printf("%d\n",max);

    return 0;
}