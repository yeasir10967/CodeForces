#include<stdio.h>

int main()
{
    int arr[4],count= 0;
    scanf("%i %i %i %i",&arr[0],&arr[1],&arr[2],&arr[3]);
    
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 3-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(int i = 0; i < 3; i++)
    {
        if(arr[i] == arr[i+1]) count++;
    }

    printf("%i",count);
}