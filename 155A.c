#include<stdio.h>
#include <stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include <stdbool.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int best=arr[0];
    int worst=arr[0];

      for(int i=0;i<n;i++)
      {
        if(arr[i]>best || arr[i]<worst)
        {
            count++;
        }
        if(arr[i]>best)
        
         {
               best=arr[i];
         }
        
        if(arr[i]<worst)
        {
            worst=arr[i];

        }
      }
      printf("%d\n",count);
    return 0;
}