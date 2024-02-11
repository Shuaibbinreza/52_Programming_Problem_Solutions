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
        for (int j = 0; j < in; j++)
        {
            for (int k = 0; k < in; k++)
            {
                cout << "*";
            }
            cout << endl;
        }
        cout << endl;
    }
    
    return 0;
}
