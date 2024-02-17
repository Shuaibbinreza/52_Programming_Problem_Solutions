#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    char ch;

    for (int i = 0; i < t; i++)
    {
        string str;

        getline(cin, str);

        reverse(str.begin(), str.end());
        cout << str << endl;
    }

    return 0;
}
