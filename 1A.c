#include <stdio.h>

int main()
{
    
    long long n,m,a;
    scanf("%lld %lld %lld",&n,&m,&a);
    long long int count,count2;
    if(n%a==0)
    {
        count=n/a;
    }
    else
    {
        count=n/a+1;
        
    }
    
    if(m%a==0)
    {
        count2=m/a;
    }
    else
    {
        count2=m/a+1;
    }
    
    printf("%lld",(count*count2));
    printf("\n");
}


    