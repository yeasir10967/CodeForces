// #include<bits/stdc++.h>
// using namespace std;

// #define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

// int main()
// {
//     optimize();

//     int n, x,i,j;
//     cin >> n >> x;
//     bool flag=false;
//     vector<int> v(n);

//     for (int k = 0; k < n; k++)
//     {
//         cin >> v[k];
//     }

//     for ( i = 0; i < n - 1; i++)
//     {
//         for (j = i + 1; j < n; j++) 
//         {
//             if (v[i] + v[j] == x)
//             {
//                 cout << i+1 << " " << j+1 << endl;
//                 return 0;
//             }
//         }
//     }
    
//      cout <<"-1"<< endl;
    

//     return 0;
// }


// both codes are correct but the second one has o(n) complexity where the first one has o(n^2)



#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
     optimize();
     int n,x;
     cin>>n>>x;

     unordered_map<int,int> m;
     vector<int>v(n);
     for(int i=0;i<n;i++)
     {
        cin>>v[i];
        m[v[i]]=i+1;
     }
     for(int i=0;i<n;i++)
     {
        int baki=x-v[i];
        if(m.find(baki)!=m.end() && m[baki]!=i+1)
        {
            cout<<i+1<<" "<<m[baki]<<endl;
            return 0;
        }
     }
     cout<<"-1"<<endl;

    return 0;
}