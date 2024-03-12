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
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
         scanf("%d %d",&a[i],&b[i]);
    }
     for(int i=0;i<n;i++)
     {
        if(a[i]!=b[i])
        {
            printf("rated\n");
            return 0;
        }
     }
      for(int i=0;i<n-1;i++)
      {
         if(a[i]<a[i+1])
         {
            printf("unrated\n");
            return 0;
         }
      }

      printf("maybe\n");


    return 0;
}