#include<bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;

    for(int x = 0; x < t; x++){
        int n;
        cin >> n;
        int arr[25][25] = {0};
        for(int i = 1; i <= n+1; i++){
            for(int j = 1; j <= i; j++){
                if(j == 1 || j == i){
                    arr[i][j] = 1;
                    if(j == 1 && i == 1)    cout << arr[i][j];
                    else if(j == 1 && i > 1)    cout << arr[i][j] << " ";
                    else if(j == i) cout << arr[i][j];

                }
                else{
                    arr[i][j] = arr[i-1][j] + arr[i-1][j-1];
                    cout << arr[i][j] << " ";
                }
                //cout << j;
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
