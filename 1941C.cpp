
// both code works


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0;
        string s,str1="map",str2="pie";
        cin>>n>>s;
        for(int i=0;i<s.size();i++)
        {
            if(s.substr(i,3)=="map" || s.substr(i,3)=="pie")
            {
                count++;
                i+=2;
            }
        }
       
        cout<<count<<"\n";
        
    }
    return 0;
}






// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, count = 0;
//         string s;
//         cin >> n >> s;
//         for (int i = 0; i < s.size(); i++)
//         {
           
//            if ( s[i] == 'm' && s[i + 1] == 'a' && s[i + 2] == 'p')
//             {
//                 count++;
//                 i+=2;
//             }
//             else if ( s[i] == 'p' && s[i + 1] == 'i' && s[i + 2] == 'e')
//             {
//                 count++;
//                 i+=2;
//             }
//         }
//         cout << count << "\n";
//     }
//     return 0;
// }
