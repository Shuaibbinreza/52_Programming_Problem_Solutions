#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string st;
        cin >> st;
        char ch = st[st.size()-1];
        int n = ch - '0';
        if(n % 2 == 0)  cout << "even" << endl;
        else    cout << "odd" << endl;
    }
    
    return 0;
}