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
        int res = sqrt(in);
        int res1 = res * res;
        if(in == res1)    cout << "YES" << endl;
        else    cout << "NO" << endl;
    }
    return 0;
}
