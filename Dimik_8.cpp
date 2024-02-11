#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)    
    {
        int arr[4];
        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr+3);
        cout << "Case " << i+1 << ": " << arr[0] << " " << arr[1] << " " << arr[2] << endl;
    }
    return 0;
}
