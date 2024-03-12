#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int h=0,e=0,l=0,o=0;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='h' && h==0)
        {
            h=1;
        } 
        if(str[i]=='e'&&e==0&&h==1)
        {
            e=1;
        }
        if(str[i]=='l'&&e==1&&l<2)
        {
            l++;
        } 
        if(str[i]=='o'&&l==2)
        {
            o=1;
        }
    }
    if( h==1 && e==1 && l==2 && o==1)
    {
        cout<<"YES"<<endl;

    } else 
    cout<<"NO"<<endl;

    return 0;
}