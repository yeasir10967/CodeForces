#include<stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int n,count=0,x;
    scanf("%d",&n);
    x=n*2;
    int arr[x];
    for(int i=0;i<x;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<x;i++)
    {
        if(arr[i]<arr[i+1] && arr[i+1]-arr[i]>=2)
        {
            count++;
            
        }
        i++;
    }
    printf("%d\n",count);
    return 0;
}