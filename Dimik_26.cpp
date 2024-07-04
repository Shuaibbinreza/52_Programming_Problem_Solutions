#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        double num;
        cin >> num;
        
        int cnt = 0;
        while (num >= 1.0)
        {
            num = num / 2.0;
            cnt++;
        }
        cout << cnt << " days" << endl;
    }

    return 0;
}
