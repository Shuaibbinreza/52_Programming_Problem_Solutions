#include<bits/stdc++.h>
using namespace std;

int main()
{
    int cnt = 0;
    for (int i = 1000; i >= 1; i--)
    {
        if(cnt == 5){
            cout << endl;
            cnt = 1;
        }    
        else    cnt++;
        cout << i << "\t";
    }
    
    return 0;
}