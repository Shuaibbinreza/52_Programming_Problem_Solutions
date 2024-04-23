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
        int a = in % 10;
        int b = in / 10000;
        int c = b % 10;
        cout << "Sum = " << a + c << endl;
    }
    return 0;
}
