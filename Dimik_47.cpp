#include<bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;

    while(t--){
        int arr1[105], arr2[105];
        int n1, n2;
        cin >> n1;

        for(int i = 0; i < n1; i++) cin >> arr1[i];

        cin >> n2;
        for(int i = 0; i < n2; i++) cin >> arr2[i];

        int k = 0, i = 0, j = 0;
        int arr[210];

        while(1){
            if(arr1[i] < arr2[j]){
                arr[k] = arr1[i];
                i++;
                k++;
            }
            else{
                arr[k] = arr2[j];
                j++;
                k++;
            }

            if(i == n1 || j == n2)  break;
        }

        for(int x=i; x < n1; x++){
            arr[k] = arr1[x];
            k++;
        }
        for(int x = j; x < n2; x++){
            arr[k] = arr2[x];
            k++;
        }
        cout << arr[0];
        for(int x = 1; x < k; x++){
            cout << " " << arr[x];
        }
        cout << endl;
    }

    return 0;
}