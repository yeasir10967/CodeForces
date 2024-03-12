#include<stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=2;i<n;i++)
    {
       for(int j=0;j<n;j++) 
       {
        if(i+j==n)
        {
            printf("%d %d\n",i,j);
         return 0;
        }
       }
    }

}