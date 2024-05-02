#include<bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;

    while(t--){
        unsigned long long int num;
        cin >> num;
        bool ck = true;
        if(num == 2 || num == 3){
            cout << num << " is a prime" << endl;
            continue;
        }
        for(unsigned long long int i = 2; i <= sqrt(num); i++){
            if(num % i == 0){
                ck = false;
                break;
            }
        }
        if(ck)  cout << num << " is a prime" << endl;
        else    cout << num << " is not a prime" << endl;
    }

    return 0;
}