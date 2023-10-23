#include<bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;

    while(t--){
        int num;
        cin >> num;

        int arr[num+1] = {0};

        for(int i = 0; i < num-1; i++){
            int in;
            cin >> in;
            arr[in] = 1;
        }
        int res;
        for(int i = 1; i <= num; i++){
            if(arr[i] == 0){
                res = i;
                break;
            }
        }

        cout << res << endl;
    }

    return 0;
}