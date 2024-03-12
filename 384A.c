// #include<stdio.h>
// #include <stdlib.h>
// #include<math.h>
// #include<string.h>
// #include<ctype.h>
// #include <stdbool.h>

// int main() {
//     int n, i, j;
//     char a[1007][1007] = {0};

//     scanf("%d", &n);
//     printf("%d\n", (n * n + 1) / 2);

//     for (i = 0; i < n; i++) {
//         for (j = 0; j < n; j++) {
//             a[i][j] = (i + j) % 2 ? '.' : 'C';
//             printf("%c", a[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

#include<stdio.h>
int main()
{
    int n,i,j,ans;
    char a[1007][1007]={0};
    scanf("%d",&n);
    ans=(n*n)/2+n%2;
    printf("%d\n",ans);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            a[i][j]=(i+j)%2?'.':'C';
    }
    for(i=0;i<n;i++)printf("%s\n",a[i]);
    return 0;
}