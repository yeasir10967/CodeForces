#include<stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int n,k,count=0;
    scanf("%d %d",&n,&k);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
     for(int i=0;i<n;i++)
     {
        if(arr[i]>0)
        {
        if(arr[i]==arr[k-1] || arr[i]>=arr[k-1])
        {
            count++;
        }
        }
     }
     printf("%d",count);
    return 0;
}