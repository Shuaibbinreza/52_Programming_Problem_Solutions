#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)    
    {
        int in;
        cin >> in;
        long long int res = 1;
        if(in == 0 || in == 1)  cout << 1 << endl;
        else{
            for (int i = 2; i <= in; i++)
            {
                res = res * i;
            }
            cout << res << endl;
        } 
    }
    return 0;
}
