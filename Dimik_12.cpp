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
        int cnt = 0;
        int div = 5;
        while (1)
        {
            int res = in / div;
            if(res == 0)    break;
            cnt = cnt + res;
            div = div * 5;
        }
        cout << cnt << endl;
    }
    return 0;
}
