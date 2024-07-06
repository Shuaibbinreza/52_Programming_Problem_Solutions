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

        int cnt = 0;

        for (int j = 0; j < str.size(); j++)
        {
            if(str[j] == ' ')   cnt++;
        }
        
        cout << "Count = " << cnt + 1 << endl;
    }

    return 0;
}
