#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        string str;
        cin >> str;
        //cout << str << endl;
        for (int i = 0; i < str.size(); i++)
        {
            cout << (int)str[i] - 64;
        }
        cout << endl;
    }
      
    

    return 0;
}
