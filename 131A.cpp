#include<iostream>
#include<string>
using namespace std;
int main ()

{
    string str;
    cin>>str;
    for(int i=1;str[i]!='\0';i++)
    {
        if(islower(str[i]))
        {
          cout<<str;
             return 0;
        }
     
    }
    for(int i=0;str[i]!='\0';i++)
    {
        cout<<char(str[i]^32);
        
    }
 return 0;
}