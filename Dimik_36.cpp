#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int num;
        cin >> num;
        cin.ignore();

        vector<string> vc;
        string st;
        for(int i = 0; i < num; i++){
            cin >> st;
            vc.push_back(st);
        }
        sort(vc.begin(), vc.end());

        for(int i = 0; i < num; i++){
            cout << vc[i] << endl;
        }
    }

    return 0;
}
