// #include<stdio.h>
// #include <stdlib.h>
// #include<conio.h>
// #include<math.h>
// #include<string.h>
// #include<ctype.h>
// int main()
// {
//     int n,i,j;
//     scanf("%d",&n);
//     for( i=1;i<=n;i++)
//     {
//          for( j=1;j<=i;j++)
//          {
//             if((i*j)==n)
//             {
//                 printf("%d %d\n",j,i);
//                return 0;
//             }
//          }
//     }
   
//     return 0;
// }
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
    int i=sqrt(n);
    while(n%i)
    {
        i--;
    }
    printf("%d %d",i,n/i);
    
    return 0;
}
