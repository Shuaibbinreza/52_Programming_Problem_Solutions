#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        string st;
        cin >> st;
        bool flag = true;
        int len = st.size();
        for(int i = 0; i < len/2; i++){
            if(st[i] != st[len-i-1])  flag = false;
        }
        if(flag)    cout << "Yes! It is palindrome!" << endl;
        else    cout << "Sorry! It is not palindrome!" << endl;
    }

    return 0;
}
