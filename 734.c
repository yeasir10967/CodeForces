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
    getchar();
    int a=0,d=0;
    char str[n];
    gets(str);
    for(int i=0;i<n;i++)
    {
        if(str[i]=='A'){
            a++;
        }else{
            d++;
        }
    }
    if(a>d){
        printf("Anton\n");
    } else if(a<d){
        printf("Danik\n");
    } else if(a==d){
        printf("Friendship\n");
    }
    return 0;
}