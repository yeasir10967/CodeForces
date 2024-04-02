#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    int t;
    cin >> t;
    
    while (t--)
    {
        int n;
        cin >> n;
        
 
        int max_gcd = 1;
        
       
        for (int i = 1; i < n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
               
                int current_gcd = __gcd(i, j);
                
                if (current_gcd > max_gcd)
                {
                    max_gcd = current_gcd;
                }
            }
        }
        
      
        cout << max_gcd << endl;
    }
    
    return 0;
}
