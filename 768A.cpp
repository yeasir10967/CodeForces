

// #include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    sort(arr,arr+n);
     for(int i=0;i<n;i++)
     if(arr[i]>arr[0]&&arr[i]<arr[n-1])
     count++;

     cout<<count<<endl;

    return 0;
}