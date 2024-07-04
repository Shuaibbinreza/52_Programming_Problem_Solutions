#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long int a, b;
        cin >> a >> b;
        long long int mul = a * b;
        long long int res = mul / __gcd(a, b);
        cout << "LCM = " << res << endl;
    }

    return 0;
}
