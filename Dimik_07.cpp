#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    for (int i = 0; i < t; i++)    
    {
        string st;
        int cnt = 0;
        getline(cin, st);
        int len = st.size();
        bool ck = true;
        //cout << len << endl;
        for (int i = 0; i < len; i++)
        {
            if(st[i] != ' ')    ck = true;
            if(st[i] == ' ' && ck){
                cnt++;
                ck = false;
            }    
            //cout << st << " ch " << cnt << endl;
        }
        
        cout << cnt + 1 << endl;
    }
    return 0;
}
