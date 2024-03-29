#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
     optimize();
       int t;
    cin >> t;

    while (t--) {
        string somoi;
        cin >> somoi;

        int ghonta = stoi(somoi.substr(0, 2));
        int minute = stoi(somoi.substr(3, 2));

        string period = (ghonta < 12) ? "AM" : "PM";

       
        if (ghonta == 0) {
            ghonta = 12;
        } else if (ghonta > 12) {
            ghonta -= 12;
        }

    
        string ghontaStr = (ghonta < 10) ? "0" + to_string(ghonta) : to_string(ghonta);
        string minuteStr = (minute < 10) ? "0" + to_string(minute) : to_string(minute);

        string ans = ghontaStr + ":" + minuteStr + " " + period;
        cout<< ans << endl;
    }
    return 0;
}