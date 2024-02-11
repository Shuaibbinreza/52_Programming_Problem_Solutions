#include<bits/stdc++.h>
using namespace std;

void divs(int in){
    for (int i = 2; i <= in/2; i++)
    {
        if(in % i == 0) cout << i << " ";
    }
    
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)    
    {
        int in;
        cin >> in;
        if(in == 1){
            cout << "Case " << i+1 << ": " << 1 << endl;
            continue;
        } 
    
        cout << "Case " << i+1 << ": " << 1 << " ";
        divs(in);
        cout << in << endl;
    }
    
    
    return 0;
}
