#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();

    string ch;
    
    for (int i = 0; i < t; i++)
    {
        map <char, int> mp;
        getline(cin, ch);
        //cout << ch << endl;
        for (int j = 0; j < ch.size(); j++)
        {
            mp[ch[j]]++;
        }
        
        for(auto& x: mp){
            if(x.first >= 'a' && x.first <= 'z')
                cout << x.first << " = " << x.second << endl;
        }

        cout << endl;
    }
    
    return 0;
}
