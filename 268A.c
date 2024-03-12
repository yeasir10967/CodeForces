#include<stdio.h>
#include <stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include <stdbool.h>
int main()
{
    int n,cnt=0;
    scanf("%d",&n);
    int arr[n][2];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        {
             scanf("%d",&arr[i][j]);
        }
    }
      for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
             if(arr[i][0]==arr[j][1])
             {
                cnt++;
             }
        }
    }
    printf("%d",cnt);

    return 0;
}