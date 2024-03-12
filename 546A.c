#include<stdio.h>
#include <stdlib.h>
int main()
{
    int k,w,n,sum,x;

    scanf("%d %d %d",&k,&n,&w);
    x=w*(w+1);
    sum=(k*x)/2;
    if(sum>n)
    {
         printf("%d\n",sum-n);
    } else 
    {
         printf("0\n");
    }
   

    return 0;
}