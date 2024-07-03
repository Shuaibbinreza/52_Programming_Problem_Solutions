#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        long long int num;
        long long int n = 0;
        cin >> num;
        if(num < 0){
            num = abs(num);
            //cout << "-";
        }
        while(num != 0){
            n = n * 10;
            n += (num % 10);
            num = num / 10;
        }
        //n += (num % 10);
        cout << n << endl;
    }

    return 0;
}
