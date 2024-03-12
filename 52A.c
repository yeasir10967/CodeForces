#include<stdio.h>
#include <stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include <stdbool.h>
int main()
{
    int n,c1=0,c2=0,c3=0,result,max;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
         scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            c1++;
        } else if(arr[i]==2)
        {
            c2++;
        } else if (arr[i]==3){
            c3++;
        }
    }
    if(c1>=c2 && c1>=c3)
    {
       max=c1;
    } else if(c2>=c1 && c2>=c3)
    {
       max=c2;
    } else{
         max=c3;
          
    }
     printf("%d\n",n-max);


    return 0;
}

// #include<stdio.h>
// #include <stdlib.h>
// #include<math.h>
// #include<string.h>
// #include<ctype.h>
// #include <stdbool.h>
// int main()
// {
//     int n,arr[4]={0},x;
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++)
//     {
//         scanf("%d",&x);
//         arr[x]++;
//     }
//     int maxCount=(arr[1]>=arr[2] && arr[1]>=arr[3]?arr[1]:arr[2]>=arr[1] &&arr[2]>=arr[3]?arr[2]:arr[3]);
//     printf("%d\n",n-maxCount);
//     return 0;
// }