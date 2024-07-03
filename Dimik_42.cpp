#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){
        int in;
        cin >> in;
        for(int i = in; i >= 0; i--){
            if(i == 1) cout << "2 + ";
            else if(i == 0)  cout << "1" << endl;
            else    cout << "2^" << i << " + ";
        }
    }

    return 0;
}
