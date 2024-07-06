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
        
        char cc;
        cin >> cc;
        cin.ignore();
        //cout << cc << " " << mp[cc] << " " << mp['h']<< endl;
        if(mp[cc])  cout << "Occurrence of '" << cc << "' in '" << ch << "' = " << mp[cc] << endl;
        else    cout << "'" << cc << "' is not present" << endl;
    }
    
    return 0;
}
