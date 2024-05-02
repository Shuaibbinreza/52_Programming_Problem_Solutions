#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int cnt = 1;
        bool flag = false;
        for(int i = 0; i < n*2-1; i++){
            for(int j = 0; j < cnt-1; j++){
                cout << m << " ";
            }
            cout << m;
            if(cnt == n)    flag = true;
            if(flag)    cnt--;
            else    cnt++;
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}